#include <iostream>
using namespace std;

class MyClass{ //the class
    public: //access modifier
        int myNum; //attribute (int variable)
        string myStr; //attribute (string variable)
};

int main(){
    MyClass myObj; //create an object of the class "MyClass"

    //access and set values for the attributes:
    myObj.myNum=10;
    myObj.myStr="Sang";

    //print attributes' values:
    cout<<myObj.myNum<<" "<<myObj.myStr<<endl;

    //create another object having the same attributes' values:
    MyClass obj2=myObj;
    cout<<obj2.myNum<<" "<<obj2.myStr<<endl;

    return 0;
}