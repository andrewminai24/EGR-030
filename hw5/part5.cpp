#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(void){
    ifstream infile;
    infile.open(“test.txt”);

    //Check for error
    if(infile.fail()){
        cerr << "Error Opening file" << endl;
        exit(1);
    }
    return(0);
}