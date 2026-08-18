#include <iostream>
#include <list>
using namespace std;
int main(){
    //create a list of char type
    list<char> myList={'a','s','n','g'};

    cout<<"the first element: "<<myList.front()<<'\n';  //get the first element
    cout<<"the last element: "<<myList.back()<<'\n';    //get the last element

    myList.push_back('y');  //add an element at the end
    myList.push_front('e'); //add an element at the beginning

    myList.pop_back();  //remove the last element
    myList.pop_front(); //remove the first element

    //get the size of the list
    cout<<"the current size of the list: "<<myList.size()<<'\n';

    //check if a list is empty
    cout<<"Is the list now empty? "<<(myList.empty() ? "True" : "False")<<'\n';

    for (char c : myList){  //we can't access elements by indices
        cout<<c<<" ";
    }

    return 0;
}