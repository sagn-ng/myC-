#include <iostream>
#include <ctime>
using namespace std;
int main(){
    struct tm myTime;
    myTime.tm_year=2026-1900; myTime.tm_mon=4-1; myTime.tm_mday=22;

    myTime.tm_hour=20; myTime.tm_min=30; myTime.tm_sec=0;
    myTime.tm_isdst=-1;

    //mktime() method to validate the date first, fix errors like: tm_mday=32
    mktime(&myTime);

    //asctime() method to display dates from a tm struct
    //faster than assign: time_t = mktime(&myTime) then ctime()
    cout<<asctime(&myTime)<<endl;

    //print with preset format:
    char output[50];
    strftime(output, 50, "%a %b %d %Y, %I:%M:%S %p", &myTime);
    cout<<output<<endl;
    
    //read more at https://www.w3schools.com/cpp/cpp_date.asp
    return 0;
}