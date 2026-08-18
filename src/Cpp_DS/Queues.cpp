#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
    //create a queue
    queue<string> cars; //cannot add elements at the time of declaration

    //add elements to the queue
    cars.push("BMW"); cars.push("Ford");
    cars.push("Volvo");

    cout<<cars.front()<<'\n'; //get the front (first) element of the queue
    cout<<cars.back()<<'\n'; //get the back element (newest one) of the queue

    cars.pop(); //remove the front element of the queue

   //get the size of the queue
    cout<<"the current size of the queue: "<<cars.size()<<'\n';

    //check if a queue is empty
    cout<<"Is the queue now empty? "<<(cars.empty() ? "True" : "False")<<'\n';

    return 0;
}