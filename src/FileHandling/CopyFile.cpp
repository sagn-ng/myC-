#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool CopyBinaryFile(string srcPath, string dstPath){
    //we must use the binary mode std::ios::binary
    ifstream src(srcPath, ios::binary); //read binary data from source file
    if (!src.is_open()){
        cerr<<"Error opening the source file"<<endl;
        return false;
    }

    ofstream dst(dstPath, ios::binary); //write binary data into destination file
    if (!dst.is_open()){
        cerr<<"Error creating the destination file"<<endl;
        return false;
    }

    //copy all the contents through the buffer:
    dst<<src.rdbuf();

    return src.good() && dst.good();
    //the good() method checks whether src and dst are in good state or not
}

int main(){
    string srcPath="C:\\Users\\admin\\Pictures\\IMG_1718.JPG";
    string dstPath="copyImg.JPG";
    if (CopyBinaryFile(srcPath, dstPath)){
        cout<<"Copied successfully"<<endl;
    }
    else cout<<"Copying failed"<<endl;
    return 0;
}