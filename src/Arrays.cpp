#include <iostream>
#include <string>
using namespace std;
int main(){
    string cars[4]={"Ferrari", "McLaren", "Volvo","Ford"};
    cout<<"Value of cars[0] before getting change: "<<cars[0]<<endl; //print an element of the array;

    cars[0]="Porsche"; //change the value of an element
    cout<<"Value of cars[0] after getting changed: "<<cars[0]<<'\n'<<endl;

    //the for-each loop, only from C++ 11 (2011):
    for (string u: cars) cout<<u<<endl;

    return 0;
}