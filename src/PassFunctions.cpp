#include <iostream>
#include <functional> //to work with the method 2 and 3 below
using namespace std;

//these 2 functions below are callback functions
int avg(int x, int y){
    return (x+y)/2;
}
int add(int x, int y){return x+y;}

//method 1: passing a function pointer
void process(int x, int y, int (*func)(int, int)) { //(*func)(int) is the function pointer
    cout << "Result: " << func(x, y)<<'\n';
}

//method 2: using std::function
//syntax for the parameter: function < return_type (prm1_type, prm2_type,...) > func_name
int invoke(int x, int y, function<int(int, int)>f){
    return f(x, y);
}


int main() {
    process(10, 25, &avg); //method 1

    //method 2:
    //std::function proves greater flexibility than raw function pointers (method 1)
    cout<<invoke(20, 10, add)<<'\n'; //method 2 (passing "add" or "&add" are the same)

    //method 3: using lambda expressions
    int k = invoke(20, 10, [](int x, int y) -> int{return x+y;});
    cout<<k<<'\n';
    return 0;
}