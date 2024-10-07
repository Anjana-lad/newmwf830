//Aggregation : HAS-A Relationship;
//this process can be performed by giving a reference of one class function to another class.
#include<iostream>
using namespace std;
class Address{
    public:
    string city,state;
    public:
    Address(string ct,string st){
        this->city=ct;
        this->state=st;
    }
};
class employee{
    private:
    Address *add;
    public:
    int eid;
    string name;
    public:
    employee(int id, string nm,Address *add){
        this->eid=id;
        this->name=nm;
        this->add=add;
    }
    void display(){
        cout<<"Employees details\n";
        cout<<"Eid="<<eid<<endl;
        cout<<"Name="<<name<<endl;
        cout<<"city="<<add->city<<endl;
        cout<<"state="<<add->state<<endl;
    }
};

int main(){
    Address ad("surat","gujarat");
    employee emp(1,"Ritesh",&ad);    
    emp.display();
}