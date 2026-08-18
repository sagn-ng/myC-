#include <iostream>
#include <exception>
using namespace std;

int main(){
    string s="Sang";
    try{
        cout<<s.at(10);
    }
    catch (out_of_range e){
        cout<<"Caught: "<<e.what();
    }
    return 0;
}

