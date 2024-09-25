// multilevel inheritance:: In which we have one derived class which is then base_class for other derived_class.
#include<iostream>
using namespace std;
class employee{
    protected:
    int eid;
    string name;
    public:
    void data(){
        cout<<"Enter eid:";
        cin>>eid;
        cout<<"Enter name:";
        cin.ignore();
        getline(cin, name);
    }
    void showdata(){
        cout<<"Employee id="<<eid<<"\n Name="<<name<<endl;
    }
};
class Task:public employee{
    protected:
    int t1,t2;
    public:
    void get_task(){
        data();
        cout<<"Enter tasks:";
        cin>>t1>>t2;
    }
    void display(){
        showdata();
        cout<<"Task1="<<t1<<"\n Task2="<<t2<<endl;
    }
};
class Appraisal:public Task{
    public:
    int total;
    public:
    int total_task()
    {
        get_task();
        total=t1+t2;
    }
    void show(){
        display();
        cout<<"Total task="<<total<<endl;
    }
};
int main(){
    Appraisal ap;
    ap.total_task();
    ap.show();   
}