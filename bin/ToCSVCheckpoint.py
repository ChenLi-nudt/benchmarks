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
actual_counter=0
preemption_total=0
last_predicted=0
checkpoint_percent_total=0
drained_percent_total=0
num_dirtied_percent_total=0
for log in logs:
    logname = log
    log = log.rstrip('.log')
    appname,time_percentage,predicted,actual=log.rsplit("-",3)

    #get preemption_time
    preempt_timecmd = grep['-E']['End_preemption'][logname] | tail['-n 1']
    num_checkpoint=grep['-E']['End_preemption:'][logname] | grep['-E']['Checkpoint done'] | wc['-l']
    num_checkpointed= num_checkpoint.run(retcode=None)[1]
    num_drain=grep['-E']['End_preemption:'][logname] | grep['-E']['Drain done'] | wc['-l']
    num_drained= num_drain.run(retcode=None)[1]
    num_dirty=grep['-E']['End_preemption:'][logname] | grep['-E']['Dirty done'] | wc['-l']
    num_dirtied= num_dirty.run(retcode=None)[1]
    total = int(num_checkpointed) + int(num_drained) + int(num_dirtied)




    preempt_timecmd = grep['-E']['End_preemption'][logname] | tail['-n 1']
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
    if last_predicted != predicted:
        if last_predicted != 0:
            cur_list[appname,float(time_percentage),int(last_predicted)]=float(preemption_total)/actual_counter
            per_list[appname,float(time_percentage),int(last_predicted)]=(float(checkpoint_percent_total)/actual_counter, float(checkpoint_percent_total)/actual_counter,float(num_dirtied_percent_total)/actual_counter)
        actual_counter=1
        last_predicted=predicted
        preemption_total=preemption_time
        checkpoint_percent_total=float(num_checkpointed)/float(total)
        drained_percent_total=float(num_drained)/float(total)
        num_dirtied_percent_total=float(num_dirtied)/float(total)
    else:
        actual_counter+=1
        preemption_total+=preemption_time
        checkpoint_percent_total=float(num_checkpointed)/float(total)
        drained_percent_total=float(num_drained)/float(total)
        num_dirtied_percent_total=float(num_dirtied)/float(total)
    if PreemptTimeFlag:
        PreemptTimeFlag=0
        csvname="CheckpointPreemptionTimes.csv"
        csvname2="CheckpointChoicePercentages.csv"
        out=csv.writer(open(csvname,"w"), delimiter=',')
        out2=csv.writer(open(csvname2,"w"), delimiter=',')
printPreemptTimes(cur_list, out)
printPreemptTimes(per_list, out2)
