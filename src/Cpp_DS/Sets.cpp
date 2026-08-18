#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
    //create a set
    set<string> cars={"McLaren", "BMW", "Volvo", "Ferrari"};
    
    //print set elements
    for (string s: cars) cout<<s<<" ";
    cout<<"\n\n";

    //sort in decreasing order: only available for a new set
    //duplicates are ignored
    set<string> test={"McLaren", "BMW", "Volvo", "Ferrari", "McLaren"};
    for (string s: test) cout<<s<<" ";
    cout<<"\n\n";

    cars.insert("Porsche"); //add an element to the set
    cars.erase("Volvo");    //remove an element from the set
    for (string s: cars) cout<<s<<" ";
    cout<<"\n\n";

   //get the size of the set
    cout<<"the current size of the set: "<<cars.size()<<'\n';

    //check if a set is empty
    cout<<"Is the set now empty? "<<(cars.empty() ? "True" : "False")<<'\n';   

    return 0;
}