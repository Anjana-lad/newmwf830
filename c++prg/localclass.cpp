// local class : the class which is defined inside the main function is called local class 
#include<iostream>
using namespace std;
int main(){
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
    person p;
    p.get_data();
    p.display();
}