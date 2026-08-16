#include <iostream>
#include <string>
using namespace std;
//to create a function template, use the "template" keyword
template <typename T>
//T is just a placeholder for a data type
//(we could choose U, V,.. instead of T but T is the most common)
T avg(T a, T b){
    return (a+b)/2;
} //template for function

//the "template" keyword can take in more than one parameters,
//and it can be reused
template <typename T1, typename T2>
class MyPrinter{
    public:
        T1 first; T2 second;
        MyPrinter(T1 a, T2 b){
            first=a; second=b;
        }
        void display(){
            cout<<"First: "<<first<<'\n'<<"Second: "<<second<<'\n';
        }
}; //template for class

int main(){
    cout<<avg<double>(0.25, 2.5)<<'\n';
    
    MyPrinter<int, string> obj(25, "Sang"); //declare an object of a class containing templates
    obj.display();

    return 0;    
}