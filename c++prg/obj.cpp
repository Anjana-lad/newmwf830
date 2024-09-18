// class with datamember and member function in one program
#include<iostream>
using namespace std;
class person{
    public:
    int pid;
    string p_name;
    public:
    void get_data(){
        cout<<"Enter pid:";
        cin>>pid;
        cout<<"Enter pname:";
       //cin>>p_name;
       cin.ignore();
       getline(cin, p_name);
    }
    void display(){
        cout<<"Pid="<<pid<<endl<<"Name="<<p_name<<endl;
    }
};
int main(){
    person p,p2;
    p.get_data();
    p.display();
    p2.get_data();
    p2.display();
}