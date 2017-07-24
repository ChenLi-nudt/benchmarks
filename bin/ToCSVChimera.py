#!/usr/bin/env python

import os
import re
import csv
import subprocess
from plumbum.cmd import grep, awk, ls, head, tail, wc
def natural_key(string_):
    """See http://www.codinghorror.com/blog/archives/001018.html"""
    return [int(s) if s.isdigit() else s for s in re.split(r'(\d+)',string_)]

def printPreemptTimes(inDict, out) :
    last_appname=0
    last_time_percentage=-1
    last_deadline=-1
    print_last=0
    first_row_flag=0
    first_row=[]
    keylist = inDict.keys()
    keylist.sort()
    cur_row=[]
    for key in keylist:
        appname,time_percentage,deadline=key
        if appname != last_appname:
            last_appname = appname
            if print_last:
                out.writerow(cur_row)
                print_last=0
            last_time_percentage=-1
            out.writerow([])
   #         csvname=str(appname)+inName+'.csv'
   #         out = csv.writer(open(csvname,"w"), delimiter=',')
        if time_percentage != last_time_percentage:
            if last_time_percentage == -1:
                first_row_flag=1
            else:
                if first_row_flag:
                   #ugly hack to get kernel name
                   time_percentagestr = "{:.3f}".format(time_percentage) 
                   namestr=str(appname)+'-'
                   thislog = ls | grep['-E'][namestr] | head['-n'][1]
                   newlog = thislog()
                   newlog = newlog.rstrip()
                   first_row.insert(0,appname)
                   out.writerow(first_row)
                   first_row=[]
                   first_row_flag=0
            last_time_percentage = time_percentage
            if print_last:
                out.writerow(cur_row)
            cur_row=[str(time_percentage)]
            print_last=1
        if first_row_flag:
            first_row.append(deadline)
        cur_row.append(inDict[key])
    out.writerow(cur_row)




#main
#globals
PreemptTimeFlag=1
#get log files
logs = [f for f in os.listdir('.') if re.match(r'.*\.log$', f)]
logs.sort(key=natural_key)
#init lists and hash table
cur_list={}
per_list={}
context_list={}
drainLat_list={}
switchLat_list={}
lastName="nothing"
for log in logs:
    logname = log
    log = log.rstrip('.log')
    appname,time_percentage,deadline=log.rsplit("-",2)



    #get context size
    contextSizeCmd=grep['-E']['context size'][logname] | awk['{sum += $15} END{if(NR>0) print sum/NR; else print "N/A"}']
    contextSize = contextSizeCmd.run(retcode=None)[1]
    contextSize = str(contextSize)
    contextSize = contextSize.strip()

    #get preemption_time
    preempt_timecmd = grep['-E']['End_preemption'][logname] | tail['-n 1']
    num_switch=grep['-E']['Start_preemption:'][logname] | grep['-E']['to be switched'] | wc['-l']
    num_switched= num_switch.run(retcode=None)[1]
    num_switched= int(num_switched)
    num_drain=grep['-E']['Start_preemption:'][logname] | grep['-E']['to be drained'] | wc['-l']
    num_drained= num_drain.run(retcode=None)[1]
    num_drained = int(num_drained)
    num_flush=grep['-E']['Start_preemption:'][logname] | grep['-E']['to be flushed'] | wc['-l']
    num_flushed= num_flush.run(retcode=None)[1]
    num_flushed = int(num_flushed)
    total = num_switched + num_drained + num_flushed
    value = preempt_timecmd.run(retcode=None)[1]
    value = value.encode('utf-8')
    try:
        if value!="" :
            value=float(value)
    except:
        error=0
    #    print value
    value=value.split(",")
    preempt_point=value[4]
    preempt_point=re.findall(r'\d+',preempt_point)
    preempt_point=int(preempt_point[0])
    time_point=value[3]
    time_point=re.findall(r'\d+',time_point)
    time_point=int(time_point[0])
    preemption_time=time_point-preempt_point

    #get overhead
    switchStartCmd=grep['-E']['context switch done'][logname] | awk['{sum += $15} END{if(NR>0) print sum; else print "N/A"}']
    switchEndCmd=grep['-E']['context switch done'][logname] | awk['{sum += $12} END{if(NR>0) print sum; else print "N/A"}']
    switchStart= switchStartCmd.run(retcode=None)[1]
    switchEnd= switchEndCmd.run(retcode=None)[1]
    switchEnd = str(switchEnd)
    switchEnd = switchEnd.strip(',')
    try:
        switchStart = int(switchStart)
    except:
        switchStart = 0
    try:
        switchEnd = int(switchEnd)
    except:
        switchEnd = 0

    drainStartCmd=grep['-E']['Drain done'][logname] | awk['{sum += $14} END{if(NR>0) print sum; else print "N/A"}']
    drainEndCmd=grep['-E']['Drain done'][logname] | awk['{sum += $11} END{if(NR>0) print sum; else print "N/A"}']
    drainStart= drainStartCmd.run(retcode=None)[1]
    drainEnd= drainEndCmd.run(retcode=None)[1]
    drainEnd = str(drainEnd)
    drainEnd = drainEnd.strip(',')
    try:
        drainStart = int(drainStart)
    except:
        drainStart = 0
    try:
        drainEnd = int(drainEnd)
    except:
        drainEnd = 0
    
    switchLat = switchEnd - switchStart
    drainLat = drainEnd - drainStart
    if num_switched > 0:
        avgSwitchLatPerTb = float(switchLat)/float(num_switched)
    else:
        avgSwitchLatPerTb = "N/A"

    if num_drained > 0:
        avgDrainLatPerTb = float(drainLat)/float(num_drained)
    else:
        avgDrainLatPerTb = "N/A"

    cur_list[appname,float(time_percentage),int(deadline)]=preemption_time
    per_list[appname,float(time_percentage),int(deadline)]=(float(num_switched)/float(total), float(num_drained)/float(total), float(num_flushed)/float(total))
    context_list[appname,float(time_percentage),int(deadline)]=contextSize
    switchLat_list[appname,float(time_percentage),int(deadline)]=avgSwitchLatPerTb
    drainLat_list[appname,float(time_percentage),int(deadline)]=avgDrainLatPerTb
    if PreemptTimeFlag:
        PreemptTimeFlag=0
        csvname="ChimeraPreemptionTimes.csv"
        csvname2="ChimeraChoicePercentages.csv"
        csvname3="ChimeraContextSizePerTB.csv"
        csvname4="AvgSwitchLatPerTb.csv"
        csvname5="AvgDrainLatPerTb.csv"
        out=csv.writer(open(csvname,"w"), delimiter=',')
        out2=csv.writer(open(csvname2,"w"), delimiter=',')
        out3=csv.writer(open(csvname3,"w"), delimiter=',')
        out4=csv.writer(open(csvname4,"w"), delimiter=',')
        out5=csv.writer(open(csvname5,"w"), delimiter=',')
    if lastName==appname:
        nothing=0
    else:
        lastName=appname
printPreemptTimes(cur_list, out)
printPreemptTimes(per_list, out2)
printPreemptTimes(context_list,out3)
printPreemptTimes(switchLat_list,out4)
printPreemptTimes(drainLat_list,out5)
