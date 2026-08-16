#include <iostream>
#include <fstream>
using namespace std;
int main(){
    //open a file in read mode
    ifstream file("myText.txt");
    string s;
    
    file>>s; //read string from the file
    //the input is taken until the first whitespace

    getline(file, s);
    cout<<"Read string: "<<s;
    return 0;
}

