#include <iostream>
using namespace std;
int main(){
    //i'll only introduce named structure:
    //for named structure in C++, not like C, we don't need the struct keyword
    //so we don't need typedef
    struct coffee{
        string name;
        int price;
    };

    coffee cf1;
    cf1.name="matcha latte"; cf1.price=35000;
    cout<<"What i bought: "<<cf1.name<<"; price: "<<cf1.price<<endl;

    coffee cf2=cf1; //simply assign one to be equal another like normal variables
    cf2.name="orange juice";
    cout<<"What i bought later: "<<cf2.name<<"; price: "<<cf2.price<<endl;

}