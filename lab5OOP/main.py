from datetime import date, time
from Meeting import Meeting
from Birthday import Birthday

if __name__=="__main__":
    n= int(input("n: "))
    ndate = date(*list(map(int, input("Date(year month day): ").split())))
    meeting_arr=[]
    while n>0:
        meeting_l = input("Meeting(person place start_hour start_minute length_hour length_minute): ").split()
        new_m = Meeting(ndate, time(int(meeting_l[2]),int(meeting_l[3])),time(int(meeting_l[4]),int(meeting_l[5])),meeting_l[0], meeting_l[1] )
        meeting_arr.append(new_m)
        n-=1
    
    HB = input("Birthday(name age place start_hour start_minute length_hours length_minutes): ").split()
    new_b = Birthday (ndate, time(int(HB[3]),int(HB[4])),time(int(HB[5]),int(HB[6])),HB[0], int(HB[1]), HB[2] )
    max = meeting_arr[0]

    for i in meeting_arr:
        if i.endtime()>max.endtime():
            max = i
    print("Time from last meeting end to birthday: {0}".format(max.from_this_to_another(new_b)))