#include <iostream>
using namespace std;
int main(){
    //lambda function only works on C++ 11 or newer versions
    //syntax: [capture](parameters){code};
    //basic lambda example:
    auto message=[](){
        cout<<"hello world\n";
    };
    message();

    //lambda with parameters:
    auto avg=[](double a, double b){
        return (a+b)/2.0;
    };
    cout<<avg(2.5, 0.25)<<'\n';

    //the capture clause: capture[] - give the lambda function access to a variable outside of it
    for (int i=1; i<=3; i++){
        auto show=[i](){
            cout<<"number: "<<i<<"\n";
        };
        show();
    }
    return 0;
}