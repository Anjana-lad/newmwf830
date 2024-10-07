// program to write  data to the file.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int rollno;
    string name;
    ofstream fout;
    fout.open("G:\\newmwf830(dprr)\\c++prg\\stud.txt");   
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter rollno:";
    cin>>rollno;
    fout<<"Name:"<<name<<"\n Rollno:"<<rollno<<endl;
    cout<<"data inserted successfully"<<endl;
}