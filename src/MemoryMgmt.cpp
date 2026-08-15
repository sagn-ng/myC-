#include <iostream>
#include <string>
using namespace std;
int main(){
    //create memory space for an integer with new, store a value and print using a pointer;
    int* ptr=new int;
    *ptr=25;
    cout<<*ptr<<endl;
    //remove it when we're done:
    delete ptr;

    //for arrays, use "new type[]" and "delete[]"
    int* arr=new int[5];
    for (int i=0; i<5; i++) arr[i]=i;
    for (int i=0; i<5; i++) cout<<arr[i]<<"\n";
    delete[] arr;
    
    return 0;
    //use "new" along with "delete" to avoid memory leaks
}