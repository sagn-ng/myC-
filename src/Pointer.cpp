#include <iostream>
#include <string>
using namespace std;
int main(){
    string food="pizza"; //a variable with "string" type
    cout<<&food<<endl; //the address of "food"

    //create a pointer that stores to the address of "food" (or we say that it's pointing to "food"):
    string* ptr=&food;
    cout<<ptr<<endl; //the address of "food" (reference)
    
    //dereference:
    cout<<*ptr<<endl;

    cout<<endl;

    //we can update the original variable through the pointer
    //updating ones affects the other
    *ptr="burger";
    cout<<"new value of the pointer: "<<*ptr<<endl;
    cout<<"new value of the variable food: "<<food<<endl; //both outputs will be "burger"
    return 0;
}