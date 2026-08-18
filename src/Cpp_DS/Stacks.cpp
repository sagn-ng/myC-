#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    //create a stack
    stack<string> cars; //cannot add elements at the time of declaration

    //add elements to the stack
    cars.push("BMW"); cars.push("Ford");
    cars.push("Volvo");

    cout<<cars.top()<<'\n'; //get the top element of the stack

    cars.pop(); //remove the top (last) element of the stack

   //get the size of the stack
    cout<<"the current size of the stack: "<<cars.size()<<'\n';

    //check if a stack is empty
    cout<<"Is the stack now empty? "<<(cars.empty() ? "True" : "False")<<'\n';

    return 0;
}