#include <iostream>
#include <ctime> //import the ctime library
using namespace std;

int main(){
    time_t t=time(NULL);
    //the time() method writes a timestamp to the memory location given by the parameter,
    //but it also returns the timestamp's value, so we can also replace NULL with &t, or:
    // time_t t; time(&t);
    cout<<ctime(&t)<<endl;

    //we have localtime and gmtime;
    //localtime: computer's timezone; gmtime: GMT timezone
    //these 2 methods return pointers, we get the value by dereferencing
    struct tm currTime=*gmtime(&t); //convert a timestamp into a tm struct
    time_t check=mktime(&currTime); cout<<ctime(&check)<<endl;

    //tm struct
    struct tm myTime;
    myTime.tm_hour=20; myTime.tm_min=30; myTime.tm_sec=0;

    myTime.tm_mday=22; //the day of the month
    myTime.tm_mon=4 - 1; //count January as 0
    myTime.tm_year=2026-1900; //count 1900 as 0

    myTime.tm_isdst=-1; //daylight saving time is unknown

    time_t thatTime=mktime(&myTime); //fill up time data and convert to a timestamp
    cout<<ctime(&thatTime)<<endl;

    return 0;
}