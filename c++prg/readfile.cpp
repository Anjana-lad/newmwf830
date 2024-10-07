// program to read the data from a given file.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string str[500];
    ifstream fin;
    fin.open("G:\\newmwf830(dprr)\\c++prg\\theory\\class.txt");
    for(int i=0;i<=500;i++){
        fin>>str[i];
    }
    // for printing on terminal;
    for(int i=0;i<=500;i++){
        cout<<str[i];
    }
    fin.close();
}