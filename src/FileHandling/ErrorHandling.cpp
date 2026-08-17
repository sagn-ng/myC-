#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream file("myText.txt");
    if (file.is_open()) cout<<"The file is opened successfully for reading"<<endl;
    else{
        cerr<<"Error: file opening failed"<<endl;
        return 1;
    }

    string line;

    while (getline(file, line)){
        cout<<line<<endl;
    }

    //check for eof:
    if (file.eof()) cout<<"Reached end of file"<<endl;
    else cout<<"Error: file reading failed"<<endl;

    return 0;
}