#include <iostream>
#include <string>
using namespace std;
int main(){
    string food="pizza"; //food variable
    string &meal=food; //reference to food

    cout<<food<<"\n"; //output: pizza
    cout<<meal<<"\n"; //output: pizza
    
    cout<<endl;
    //updating one also changes the other:

    meal="burger"; //updating on the reference variable
    cout<<food<<"\n"; //output: burger

    food="chicken"; //updating on the original variable
    cout<<meal<<"\n"; //ouput: chicken
    return 0;
}