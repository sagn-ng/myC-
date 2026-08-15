#include <iostream>
#include <string> //to use the string type
using namespace std;

int main(){
    int x, y, z;
    string s;
    cout<<"Make a single input: ";
    cin>>x; //Single input

    cout<<"Make 2 inputs: ";
    cin>>y>>z; //multiple inputs

    cout<<"Input a string: ";
    cin>>s; //input a string

    cout<<"The first entered: "<<x<<"\nThe next 2 ones: "<<y<<z;
    cout<<"\nThe last string input: "<<s;
    return 0;
}