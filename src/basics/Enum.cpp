#include <iostream>
using namespace std;
int main(){
    enum level{
        LOW=1,
        MEDIUM=5,
        HIGH=10 //the last item doesn't need a coma
    };
    enum level myLv;
    myLv=LOW; //the assigned value must match with one of the items in the enum
    //or: enum level myLv=LOW;
    cout<<myLv;
    return 0;
}