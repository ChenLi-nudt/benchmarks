#!/usr/bin/env python

import os
import re
import csv
import subprocess
from plumbum.cmd import grep, awk, ls, head, tail, wc
def pause():
    prog_pause=raw_input("Press Enter")
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
total_context_list={}
checkpoint_list={}
dirty_list={}

lastName="nothing"
actual_counter=0
checkpoint_counter=0
dirty_counter=0
preemption_total=0
last_predicted=0
checkpoint_percent_total=0
drained_percent_total=0
num_dirtied_percent_total=0
for log in logs:
    logname = log
    log = log.rstrip('.log')
    appname,time_percentage,predicted,actual=log.rsplit("-",3)
    time_percentage=float(time_percentage)
    predicted=int(predicted)
    actual=int(actual)

    #get context size stats
    totalContextSizeCmd=grep['-E']['context'][logname] | awk['{sum += $18} END{if(NR>0) print sum/NR; else print "N/A"}']
    totalContextSize = totalContextSizeCmd.run(retcode=None)[1]
    totalContextSize = str(totalContextSize)
    totalContextSize = totalContextSize.strip()

    CheckpointSizeCmd=grep['-E']['context'][logname] | grep['-E']['checkpoint'] | awk['{sum += $18} END{if(NR>0) print sum/NR; else print "N/A"}']
    CheckpointSize = CheckpointSizeCmd.run(retcode=None)[1]
    CheckpointSize = str(CheckpointSize)
    CheckpointSize = CheckpointSize.strip()

    DirtySizeCmd=grep['-E']['context'][logname] | grep['-E']['dirty'] | awk['{sum += $18} END{if(NR>0) print sum/NR; else print "N/A"}']
    DirtySize = DirtySizeCmd.run(retcode=None)[1]
    DirtySize = str(DirtySize)
    DirtySize = DirtySize.strip()

    #get preemption_time
    preempt_timecmd = grep['-E']['End_preemption'][logname] | tail['-n 1']


    #get choice information
    allDrainCmd=grep['-E']['End_preemption:'][logname] | grep['-E']['all drain'] | wc['-l']
    isAllDrain= allDrainCmd.run(retcode=None)[1]
    isAllDrain = isAllDrain.encode('utf-8')
    isAllDrain = int(isAllDrain)
    if isAllDrain:
        num_checkpointed=1
        num_drained=0
        num_dirtied=0
    else:
        num_checkpoint=grep['-E']['End_preemption:'][logname] | grep['-E']['Checkpoint'] | wc['-l']
        num_checkpointed= num_checkpoint.run(retcode=None)[1]
        num_drain=grep['-E']['End_preemption:'][logname] | grep['-E']['Drain'] | wc['-l']
        num_drained= num_drain.run(retcode=None)[1]
        num_dirty=grep['-E']['End_preemption:'][logname] | grep['-E']['Dirty'] | wc['-l']
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
    if isAllDrain:
        preemption_time=0
    else:
        preempt_point=value[4]
        preempt_point=re.findall(r'\d+',preempt_point)
        preempt_point=int(preempt_point[0])
        time_point=value[3]
        time_point=re.findall(r'\d+',time_point)
        time_point=int(time_point[0])
        preemption_time=time_point-preempt_point

    if last_predicted != predicted:
        if last_predicted != 0:
            cur_list[last_appname,float(last_time_percentage),int(last_predicted)]=float(preemption_total)/actual_counter
            per_list[last_appname,float(last_time_percentage),int(last_predicted)]=(float(checkpoint_percent_total)/actual_counter, float(checkpoint_percent_total)/actual_counter,float(num_dirtied_percent_total)/actual_counter)
            if totalcontextsize_total != "Invalid":
                total_context_list[last_appname,float(last_time_percentage),int(last_predicted)]=totalcontextsize_total/totalcontextsize_counter
            else:
                total_context_list[last_appname,float(last_time_percentage),int(last_predicted)]="N/A"
            if checkpointsize_total!= "Invalid":
                checkpoint_list[last_appname,float(last_time_percentage),int(last_predicted)]=checkpointsize_total/checkpointsize_counter
            else:
                checkpoint_list[last_appname,float(last_time_percentage),int(last_predicted)]="N/A"
            if dirtysize_total!= "Invalid":
                dirty_list[last_appname,float(last_time_percentage),int(last_predicted)]=dirtysize_total/dirtysize_counter
            else:
                dirty_list[last_appname,float(last_time_percentage),int(last_predicted)]="N/A"
        actual_counter=1
        last_predicted=predicted
        last_time_percentage=time_percentage
        last_appname=appname
        preemption_total=preemption_time
        checkpoint_percent_total=float(num_checkpointed)/float(total)
        drained_percent_total=float(num_drained)/float(total)
        num_dirtied_percent_total=float(num_dirtied)/float(total)
        if totalContextSize != "N/A":
            totalcontextsize_counter=1
            totalcontextsize_total=float(totalContextSize)
        else:
            totalcontextsize_total="Invalid"
        if CheckpointSize!= "N/A":
            checkpointsize_counter=1
            checkpointsize_total=float(CheckpointSize)
        else:
            checkpointsize_total="Invalid"
        if DirtySize!= "N/A":
            dirtysize_counter=1
            dirtysize_total=float(DirtySize)
        else:
            dirtysize_total="Invalid"
    else:
        actual_counter+=1
        preemption_total+=preemption_time
        checkpoint_percent_total=float(num_checkpointed)/float(total)
        drained_percent_total=float(num_drained)/float(total)
        num_dirtied_percent_total=float(num_dirtied)/float(total)
        if totalContextSize != "N/A":
            if totalcontextsize_total=="Invalid":
                totalcontextsize_counter=1
                totalcontextsize_total=float(totalContextSize)
            else:
                totalcontextsize_counter+=1
                totalcontextsize_total+=float(totalContextSize)
        if CheckpointSize!= "N/A":
            if checkpointsize_total=="Invalid":
                checkpointsize_counter=1
                checkpointsize_total=float(CheckpointSize)
            else:
                checkpointsize_counter+=1
                checkpointsize_total+=float(CheckpointSize)
        if DirtySize!= "N/A":
            if dirtysize_total=="Invalid":
                dirtysize_counter=1
                dirtysize_total=float(DirtySize)
            else:
                dirtysize_counter+=1
                dirtysize_total+=float(DirtySize)
    if PreemptTimeFlag:
        PreemptTimeFlag=0
        csvname="CheckpointPreemptionTimes.csv"
        csvname2="CheckpointChoicePercentages.csv"
        csvname3="CheckpointAverageContextSizePerTB.csv"
        csvname4="CheckpointAverageCheckpointSizePerTB.csv"
        csvname5="CheckpointAverageDirtySizePerTB.csv"
        out=csv.writer(open(csvname,"w"), delimiter=',')
        out2=csv.writer(open(csvname2,"w"), delimiter=',')
        out3=csv.writer(open(csvname3,"w"), delimiter=',')
        out4=csv.writer(open(csvname4,"w"), delimiter=',')
        out5=csv.writer(open(csvname5,"w"), delimiter=',')
#assign last one
cur_list[last_appname,float(last_time_percentage),int(last_predicted)]=float(preemption_total)/actual_counter
per_list[last_appname,float(last_time_percentage),int(last_predicted)]=(float(checkpoint_percent_total)/actual_counter, float(checkpoint_percent_total)/actual_counter,float(num_dirtied_percent_total)/actual_counter)

if totalcontextsize_total != "Invalid":
    total_context_list[last_appname,float(last_time_percentage),int(last_predicted)]=totalcontextsize_total/totalcontextsize_counter
else:
    total_context_list[last_appname,float(last_time_percentage),int(last_predicted)]="N/A"
if checkpointsize_total!= "Invalid":
    checkpoint_list[last_appname,float(last_time_percentage),int(last_predicted)]=checkpointsize_total/checkpointsize_counter
else:
    checkpoint_list[last_appname,float(last_time_percentage),int(last_predicted)]="N/A"
if dirtysize_total!= "Invalid":
    dirty_list[last_appname,float(last_time_percentage),int(last_predicted)]=dirtysize_total/dirtysize_counter
else:
    dirty_list[last_appname,float(last_time_percentage),int(last_predicted)]="N/A"
printPreemptTimes(cur_list, out)
printPreemptTimes(per_list, out2)
printPreemptTimes(total_context_list, out3)
printPreemptTimes(checkpoint_list, out4)
printPreemptTimes(dirty_list, out5)
