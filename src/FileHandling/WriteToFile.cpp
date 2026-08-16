#include <iostream>
#include <fstream>
using namespace std;
int main(){
    //opean a file
    ofstream file("myText.txt");

    //write a string to the file
    file<<"my name is Sang.";
    return 0;
}

