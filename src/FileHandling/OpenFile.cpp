#include <iostream>
#include <fstream> //include the <fstream> header
using namespace std;

int main(){
    //opean the file for writing: ios::out
    //if the file doesn't exist, make a new one. Otherwise, overwrite it
    fstream file1("test.txt", ios::out);


    //open a file for reading: ios::in
    fstream file2("valid.txt", ios::in);
    //if the file doesn't exist, the operation fails,
    //thus, we might need to check:
    if (!file2.is_open()){
        cerr<<"This file doesn't exist!"<<endl;
        return 1; //terminate the program
    }

    //ifstream = fstream + ios::in ; ofstream = fstream + ios::out
    return 0;
}