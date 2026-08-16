#include <iostream>
using namespace std;
/*2 ways to define functions that belongs to a class:
- inside class definition
- outside class definition
*/
class Coffee{
    public:
        int netPrice;
        void printType(string name){
            cout<<name<<'\n';
        } //inside class definition

        int finalPrice(double discountRate); //prepare for definition from outside
};

int Coffee::finalPrice(double discountRate){
    return (int) netPrice - netPrice*discountRate;
} //outside class definition: Class_name :: method_name (:: is called the scope resolution operator)

int main(){
    Coffee myCf;
    myCf.netPrice=50000;
    myCf.printType("Highlands");

    cout<<"I have to pay: "<<myCf.finalPrice(0.02)<<'\n';
    return 0;
}

//when using constructor with "new", we must declare an object pointer for that, not a normal object