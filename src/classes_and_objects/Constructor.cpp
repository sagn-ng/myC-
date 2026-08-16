#include <iostream>
#include <string>
using namespace std;
class Car {
    public:
        string name;
        int year;
        Car(){
            name="Unknown";
            year=2000;
        } //constructor without parameters

        //there might be more than one constructor in a class
        //each one must have different number or type of parameters
        Car(string name, int year){
            this->name=name;
            this->year=year;
        } //constructor with parameters
};

int main(){
    Car car1; //car1.name="Unknown", car1.year=2000;
    Car car2("McLaren", 2025);
    cout<<car1.name<<", "<<car1.year<<'\n';
    cout<<car2.name<<", "<<car2.year<<'\n';
    return 0;
}