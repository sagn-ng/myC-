#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream of;
    of.open("myText.txt", ios::app); //append mode

    if (!of.is_open()) cout<<"No such file found";
    else{
        of<<"\n25\n"<<"10\n"<<"hust";
        cout<<"Data appended successfully"<<endl;

        of.close();

        fstream f("myText.txt");
        string word;
        while (f>>word) cout<<word<<" ";
        //the ">>" operator ignores all the whitespaces
        f.close();
    }
    return 0;
}