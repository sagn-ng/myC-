#include <iostream>
#include <string> //to use the string type
using namespace std;
int main(){
    //float and double type
    float x=25e2;
    double y=314e-2;
    cout<<x<<'\n'<<y<<endl;

    //bool type
    bool a=true;
    cout<<a<<endl; //output will be 1 for true, 0 for false;

    //char type
    char c='s', c1=65;
    cout<<c<<" "<<c1; //output will be "s A", as the character with ascii value of 65 is 'A'

    //can also use the keyword "auto" to let the compiler automatically figure out the type used
    return 0;
}