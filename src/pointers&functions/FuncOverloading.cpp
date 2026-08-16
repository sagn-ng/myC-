#include <iostream>
using namespace std;

//function overloading:
int avg(int a, int b){
    return a+(a-b)/2;
}
int avg(int a, int b, int c){
    return (a+b+c)/3;
}
double avg(double a, double b){
    return (a+b)/2;
}
int main(){
    //some output examples:
    cout<<avg(2, 3)<<endl;
    cout<<avg(2, 3, 5)<<endl;
    cout<<avg(0.25, 2.5)<<endl;

    return 0;
}