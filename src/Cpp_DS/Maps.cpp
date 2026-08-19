#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29}, {"Jenny", 20}};

    //access an element:
    cout<<"John is: "<<people["John"]<<'\n';    //or we can use at()

    people.at("John")=25; //change the value of an element:

    //add an element:
    people["Sang"]=19; people.insert({"Tom", 22});

    // Trying to add two elements with equal keys
    people.insert({"Jenny", 22}); people.insert({"Jenny", 30});
    cout << "Jenny is: " << people.at("Jenny") << "\n";

    people.erase("Adele");  //remove an element

    //get the size of the map
    cout<<"the current size of the map: "<<people.size()<<'\n';

    //check if a map is empty
    cout<<"Is the map now empty? "<<(people.empty() ? "True" : "False")<<'\n';
  
    for (auto person: people){
        cout<<person.first<<" is "<<person.second<<'\n';
    } //for - each loop
    return 0;
}