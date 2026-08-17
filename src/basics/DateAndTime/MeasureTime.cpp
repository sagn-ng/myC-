#include <iostream>
#include <ctime>
using namespace std;
int main(){
    time_t now, nextYear;
    struct tm datetime;

    now=time(NULL);
    datetime=*localtime(&now);

    datetime.tm_year++;
    datetime.tm_mon=0; datetime.tm_mday=1;
    datetime.tm_hour=0; datetime.tm_min=0; datetime.tm_sec=0;
    datetime.tm_isdst=-1;

    nextYear=mktime(&datetime);
    
    //difftime() function to measure the number of seconds between 2 timestamps
    int diff=difftime(nextYear, now);
    cout<<diff<<'\n';

    //clock() function to measure short time intervals while the program's running
    //it's more precise than the difftime() function
    clock_t before = clock();
    int k=0;
    for (int i=0; i<100000; i++) k+=i;
    clock_t duration = clock() - before;
    /*each call to the clock function returns a timestamp mesured in a
    unit called "clock_t", to convert to seconds, we use:*/
    cout<<"Duration: "<<(double) duration / CLOCKS_PER_SEC << " seconds";
    return 0;
}