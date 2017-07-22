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
#get log file
logs = [f for f in os.listdir('.') if re.match(r'.*\.log$', f)]
logs.sort(key=natural_key)
#init lists and hash table
cur_list={}
per_list={}
total_context_list={}
checkpoint_list={}
dirty_list={}
overhead_list={}
checkpoint_per_list={}
checkpoint_one_list={}
checkpoint_two_list={}

lastName="nothing"
actual_counter=0
checkpoint_counter=0
dirty_counter=0
preemption_total=0
last_predicted=0
checkpoint_percent_total=0
drained_percent_total=0
num_dirtied_percent_total=0
freq=1216
overhead_counter=0
for log in logs:
    logname = log
    log = log.rstrip('.log')
    appname,time_percentage,predicted,actual=log.rsplit("-",3)
    time_percentage=float(time_percentage)
    predicted=int(predicted)
    actual=int(actual)
    predicted_cycles= freq*predicted
    #test to see if we skip file or not (Does preemption happen?"
    PreemptionCmd=grep['-L']['End_preemption'][logname] | wc['-l']
    isNotPreempted = PreemptionCmd.run(retcode=None)[1]
    isNotPreempted = int(isNotPreempted)
    if isNotPreempted:
        print "%s-%.3f-%d-%d is not preempted" % (appname,time_percentage,predicted,actual)
    else:
        #get avg checkpoint overead
        #checkpoint overhead is (chkpt_done_time - ( preedict_preempt_time - predicted_time_length) 
        # = chkpt_done_time - predict_preempt_time + predicted_time_length  
        #avg is sum(chkpt_done_time)/(#TBs which checkpoint)
        awk_cmd_string = '{sum += ($11 - $19 + '
        awk_cmd_string += str(predicted_cycles)  + ')} END{if(NR>0) print sum; else print "N/A"}'
        chk1timeCmd = grep['-E']['Checkpoint done'][logname] | awk[awk_cmd_string]
        chk1time= chk1timeCmd.run(retcode=None)[1]
        chk1time=str(chk1time)
        try:
            chk1time = int(chk1time)
        except:
            chk1time=0 
        awk_cmd_string = '{sum += ($10 - $18 + '
        awk_cmd_string += str(predicted_cycles)  + ')} END{if(NR>0) print sum; else print "N/A"}'
        chk1timeCmd2 = grep['-E']['Start_preemption_again'][logname] | awk[awk_cmd_string]
        chk1time2= chk1timeCmd2.run(retcode=None)[1]
        chk1time2  = str(chk1time2)
        chk1time2 = chk1time2.strip(',')
        try:
            chk1time2=int(chk1time2)
        except:
            chk1time2=0

        awk_cmd_string = '{sum += ($11 - $14)} END{if(NR>0) print sum; else print "N/A"}'
        chk2timeCmd = grep['-E']['End_preemption: Dirty'][logname] | awk[awk_cmd_string]
        chk2time= chk2timeCmd.run(retcode=None)[1]
        chk2time = str(chk2time)
        try:
            chk2time=int(chk2time)
        except:
            chk2time=0

        numChkCmd1 = grep['-E']['Checkpoint done'][logname] | wc['-l']
        numChk1= numChkCmd1.run(retcode=None)[1]
        numChk1=int(numChk1)

        numChkCmd2 = grep['-E']['Start_preemption_again'][logname] | wc['-l']
        numChk2= numChkCmd2.run(retcode=None)[1]
        numChk2=int(numChk2)

        numChk = numChk1 + numChk2
        
        if numChk==0:
            averageChkOverhead="N/A"
            avgChk1Overhead="N/A"
            avgChk2Overhead="N/A"
        else:
            numChk=int(numChk)
            averageChkOverhead=float(chk1time+chk1time2+chk2time)/float(numChk)
            avgChk1Overhead=float(chk1time+chk1time2)/float(numChk)
            avgChk2Overhead=float(chk2time)/float(numChk)

        #get context size stats
        totalContextSizeCmd=grep['-E']['context'][logname] | awk['{sum += $18} END{if(NR>0) print sum; else print "N/A"}']
        totalContextSize = totalContextSizeCmd.run(retcode=None)[1]
        totalContextSize = str(totalContextSize)
        totalContextSize = totalContextSize.strip()
	if numChk==0:
		totalContextSize = "N/A"
	else:
		totalContextSize = float(totalContextSize)/float(numChk)
	
		
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
            num_checkpointed=0
            num_drained=1
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
                per_list[last_appname,float(last_time_percentage),int(last_predicted)]=(float(checkpoint_percent_total)/actual_counter, float(drained_percent_total)/actual_counter,float(num_dirtied_percent_total)/actual_counter)
                if overhead_total !="Invalid":
                    overhead_list[last_appname,float(last_time_percentage),int(last_predicted)]=float(overhead_total)/overhead_counter
                    checkpoint_per_list[last_appname,float(last_time_percentage),int(last_predicted)]=(float(chk1_overhead_total)/overhead_counter,float(chk2_overhead_total)/overhead_counter)
                    checkpoint_one_list[last_appname,float(last_time_percentage),int(last_predicted)]=float(chk1_overhead_total)/overhead_counter
                    checkpoint_two_list[last_appname,float(last_time_percentage),int(last_predicted)]=float(chk2_overhead_total)/overhead_counter
                else:
                    overhead_list[last_appname,float(last_time_percentage),int(last_predicted)]="N/A"
                    checkpoint_per_list[last_appname,float(last_time_percentage),int(last_predicted)]="N/A"
                    checkpoint_one_list[last_appname,float(last_time_percentage),int(last_predicted)]="N/A"
                    checkpoint_two_list[last_appname,float(last_time_percentage),int(last_predicted)]="N/A"
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
            last_predicted=predicted
            last_time_percentage=time_percentage
            last_appname=appname
            actual_counter=1
            preemption_total=preemption_time
            checkpoint_percent_total=float(num_checkpointed)/float(total)
            drained_percent_total=float(num_drained)/float(total)
            num_dirtied_percent_total=float(num_dirtied)/float(total)
            if averageChkOverhead != "N/A":
                overhead_counter = 1
                overhead_total = averageChkOverhead
                chk1_overhead_total = avgChk1Overhead
                chk2_overhead_total = avgChk2Overhead
            else:
                overhead_total="Invalid"
                chk1_overhead_total = "Invalid"
                chk2_overhead_total = "Invalid"
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
            checkpoint_percent_total+=float(num_checkpointed)/float(total)
            drained_percent_total+=float(num_drained)/float(total)
            num_dirtied_percent_total+=float(num_dirtied)/float(total)
            if averageChkOverhead != "N/A":
                if overhead_total=="Invalid":
                    overhead_counter = 1
                    overhead_total = averageChkOverhead
                    chk1_overhead_total = avgChk1Overhead
                    chk2_overhead_total = avgChk2Overhead
                else:
                    overhead_counter+=1
                    overhead_total+=averageChkOverhead
                    chk1_overhead_total+= avgChk1Overhead
                    chk2_overhead_total+= avgChk2Overhead
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
            csvname6="CheckpointOverheadAverage.csv"
            csvname7="CheckpointDirtyComparison.csv"
            csvname8="Checkpoint1.csv"
            csvname9="Checkpoint2.csv"
            out=csv.writer(open(csvname,"w"), delimiter=',')
            out2=csv.writer(open(csvname2,"w"), delimiter=',')
            out3=csv.writer(open(csvname3,"w"), delimiter=',')
            out4=csv.writer(open(csvname4,"w"), delimiter=',')
            out5=csv.writer(open(csvname5,"w"), delimiter=',')
            out6=csv.writer(open(csvname6,"w"), delimiter=',')
            out7=csv.writer(open(csvname7,"w"), delimiter=',')
            out8=csv.writer(open(csvname8,"w"), delimiter=',')
            out9=csv.writer(open(csvname9,"w"), delimiter=',')
#assign last one
if actual_counter>0:
    cur_list[last_appname,float(last_time_percentage),int(last_predicted)]=float(preemption_total)/actual_counter
    per_list[last_appname,float(last_time_percentage),int(last_predicted)]=(float(checkpoint_percent_total)/actual_counter, float(drained_percent_total)/actual_counter,float(num_dirtied_percent_total)/actual_counter)

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

if overhead_total!= "Invalid":
    overhead_list[last_appname,float(last_time_percentage),int(last_predicted)]=float(overhead_total)/overhead_counter
    checkpoint_per_list[last_appname,float(last_time_percentage),int(last_predicted)]=(float(chk1_overhead_total)/overhead_counter,float(chk2_overhead_total)/overhead_counter)
    checkpoint_one_list[last_appname,float(last_time_percentage),int(last_predicted)]=float(chk1_overhead_total)/overhead_counter
    checkpoint_two_list[last_appname,float(last_time_percentage),int(last_predicted)]=float(chk2_overhead_total)/overhead_counter
else:
    overhead_list[last_appname,float(last_time_percentage),int(last_predicted)]="N/A"
    checkpoint_per_list[last_appname,float(last_time_percentage),int(last_predicted)]="N/A"
    checkpoint_one_list[last_appname,float(last_time_percentage),int(last_predicted)]="N/A"
    checkpoint_two_list[last_appname,float(last_time_percentage),int(last_predicted)]="N/A"
printPreemptTimes(cur_list, out)
printPreemptTimes(per_list, out2)
printPreemptTimes(total_context_list, out3)
printPreemptTimes(checkpoint_list, out4)
printPreemptTimes(dirty_list, out5)
printPreemptTimes(overhead_list, out6)
printPreemptTimes(checkpoint_per_list, out7)
printPreemptTimes(checkpoint_one_list, out8)
printPreemptTimes(checkpoint_two_list, out9)
