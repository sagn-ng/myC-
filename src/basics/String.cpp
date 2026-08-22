#include <iostream>
#include <string>
using namespace std;
//if the above line is omitted, there must be an "std::" before string, i.e "std::string"
int main(){
    string lastname="Nguyen", firstname="Sang";
    
    //the + operator can be used to concatenate strings, character to form a new string:
    string fullname=lastname+' '+firstname;
    cout<<fullname<<endl;
    
    cout<<"First letter of the string \"firstname\": "<<firstname[0]<<'\n'; //or the at() method

    //a string in C++ is actually an object, and we can also use the append() method for concatenation:
    string fullname2=lastname.append(firstname); //lastname is now also concatenated
    cout<<fullname2<<endl;

    return 0;
}