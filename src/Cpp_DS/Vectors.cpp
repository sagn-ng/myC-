#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    // Create a vector called cars
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    //print vector's elements
    for (string car: cars) cout<<car<<" ";

    //access an element
    cout<<'\n'<<cars[0]<<'\n'; //or cars.at(0);

    cars.at(0)="McLaren";   //change an element

    cars.push_back("Porsche");    //add an element at the end

    cars.pop_back();    //remove the last element, return type = void

    //get the size of the vector
    cout<<"The vector is now having: "<<cars.size()<<" elements"<<'\n';

    //check whether the vector is empty or not
    cout<<"Is the vector empty: "<<(cars.empty() ? "True" : "False");
    
    return 0;
}