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

lastName="nothing"
for log in logs:
    logname = log
    log = log.rstrip('.log')
    appname,time_percentage,deadline=log.rsplit("-",2)

    #get preemption_time
    preempt_timecmd = grep['-E']['End_preemption'][logname] | tail['-n 1']
    num_switch=grep['-E']['Start_preemption:'][logname] | grep['-E']['to be switched'] | wc['-l']
    num_switched= num_switch.run(retcode=None)[1]
    num_drain=grep['-E']['Start_preemption:'][logname] | grep['-E']['to be drained'] | wc['-l']
    num_drained= num_drain.run(retcode=None)[1]
    num_flush=grep['-E']['Start_preemption:'][logname] | grep['-E']['to be flushed'] | wc['-l']
    num_flushed= num_flush.run(retcode=None)[1]
    total = int(num_switched) + int(num_drained) + int(num_flushed)
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
    cur_list[appname,float(time_percentage),int(deadline)]=preemption_time
    per_list[appname,float(time_percentage),int(deadline)]=(float(num_switched)/float(total), float(num_drained)/float(total), float(num_flushed)/float(total))
    if PreemptTimeFlag:
        PreemptTimeFlag=0
        csvname="ChimeraPreemptionTimes.csv"
        csvname2="ChimeraChoicePercentages.csv"
        out=csv.writer(open(csvname,"w"), delimiter=',')
        out2=csv.writer(open(csvname2,"w"), delimiter=',')
    if lastName==appname:
        nothing=0
    else:
        lastName=appname
printPreemptTimes(cur_list, out)
printPreemptTimes(per_list, out2)
