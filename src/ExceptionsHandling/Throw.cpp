#include <iostream>
using namespace std;
int main(){
    int age;
    //example of integer throw type
    try{
        cout<<"Enter your age: ";
        cin>>age;
        if (age<18) throw age;
        else cout<<"Access granted!"<<endl;
    }
    catch (int num){
        cout<<"You're "<<num<<" years old. Access denied!\n";
        cout<<" You must be at least 18!";
    }

    //example of "message" throw type
    char c;
    try{
        cout<<"Enter your grade of this subject: ";
        cin>>c;
        if (c<'A' || c>'F') throw "Invalid input";
        else if (c>'B') throw "Your grade must be at least B to register for this semester!";
        else cout<<"You're ready to register for this semester!";
    }
    catch (const char* msg){
        cout<<msg;
    } //we must use const char* due to the syntax

    return 0;
}