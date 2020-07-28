

/* get the correct train number */
for t in train:
    if t.endtime > midnight:
        n ++;       /* train number */

/* find the maximum overlapping */

/* array contain the start time and end time in increasing order */
start_time[] = sort_time(train.starttime)
end_time[] = sort_time(train.endtime)

/* init a counter. when we find a interval, inc the counter. When a
interval comes to end, dec the counter.
 * if there is not overlapping, the value of counter should be 0
 * the counter would contain the maximum number of overlapping
*/
i,j = 0
while (i<n && j<n){
    if (start_time[i] < end_time[j]) {      // find interval
        counter ++;
        i ++;                               // next start time
    }
    else {
        counter --;                         // end of interval
        j ++;                               // next end time 
    }
}




/* jobs */
struct jobs {
    int index;
    int profit;
    time_t time; /* the time that is allocated be follwing algorithm */
    time_t deadline;
}
/* sort the jobs in descending order of profit */
Array[] = sort_desc(jobs)
/* some empty time slots */
/* maintain a largest time range*/
time[]
/* for every jobs */
for i < (the number of total job):
    /* start from the time just beyond the deadline, j would go back
     * stop at when reach the start of the time[]
     * insert the job as close as possible to the deadline
    */
    for j in range(array[i].deadline - 1, 0, -1):
        if time[j] is empty:
            time[j] is filled;
            array[i].time = j   /* the current jobs has been put in time slot j*/
            break;



















def binarySearch(string):
 
    start = -1
    end = max_level(string)
    # binary search 
    while start < end:
        mid = (end+start+1)//2
        # check the mid whether is correct 
        if check_match(mid,string):
            start = mid
        else:
            end = mid - 1
 
    if check_match(start,string):
        return start
    else:
        return 0
 
def check_match(mid,string):
 
    max_level_string = ""
    DNA = "SNAKE"
    # create new sequence 
    for i in DNA:
        max_level_string += i*mid
 
    i,j = 0,0
    # new sequence compare to the input string 
    while i < len(max_level_string) and j < len(string):
        if max_level_string[i] == string[j]:
            i += 1
        j += 1
    # check if all letters mathc return true
    if(i == len(max_level_string)):
        return True
    else: 
        return False
 
# calculte the possible max venom level
def max_level(string):
    i = 0
    Ns,Nn,Na,Nk,Ne = 0,0,0,0,0
    while(i < len(string)):
        if (string[i]=="S"):
            Ns+=1
        elif (string[i]=="N"):
            Nn+=1
        elif (string[i]=="A"):
            Na+=1
        elif (string[i]=="K"):
            Nk+=1
        elif (string[i]=="E"):
            Ne+=1
        i+=1
    
    res = min(Na,Ne,Nk,Ns,Nn)
 
    return res
 
Input_String = input("Enter a string: ")
print("Max Venom Level: ",binarySearch(Input_String))










/* find the maximum possible level */
int s,n,a,k,e = 0       /* counter of each letter */
s = string.count('S');
n = string.count('N');
a = string.count('A');
k = string.count('K');
e = string.count('E');
return min(s,n,a,k,e)





/* min: minium possible ans
 * should be 1 at frist */
while min < max_level:

    set a position p which is the middle of min and max_level

    if string contain a subsequence matching level p:
        /* it may has other possible level */
        min = p;
    else:
        max_level = p - 1






while j < len(original_string) and i < len(substring):
    if original_string[i] == substring[j]:
        i ++;
    j ++;
/* i is the number of matching */
if i = len(subtring):
    matching success