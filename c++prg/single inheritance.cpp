// single inheritance : having one base class and its one child class .
/*syntax:
class child_name : access specifier parent class name{
//body of the class.
}
here the object will be always of child class.
*/

#include<iostream>
using namespace std;
class employee{
    private:
    int eid;
    string name;
    public:
    void get_data(){
        cout<<"Enter eid:";
        cin>>eid;
        cout<<"Enter employees name:";
        cin.ignore();
        getline(cin,name);
    }
    void display(){
        cout<<"Eid="<<eid<<endl<<"Name="<<name<<endl;
    }
};
class department :public employee{
    public:
    string depart_name;
    public:
    void get_dname(){
        get_data();
        cout<<"Enter department name:";
        getline(cin , depart_name);
    }
    void show(){
        display();
        cout<<"Department name= "<<depart_name;
    }
};
int main(){
    department dp;
    dp.get_dname();
    dp.show();    
}

// WAP for single inheritance class "vehicle" and derived class "car" the base class has data member color,max_speed and derived class have data member number of doors.