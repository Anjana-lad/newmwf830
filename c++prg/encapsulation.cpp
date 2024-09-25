//Encapsulation : 
#include<iostream>
using namespace std;
class person{
    private:
    int rollno;
    string name;
    public:
    void set_data(int rno,string nm){
        rollno=rno;
        name=nm;
    }
    void get_data(){
        cout<<"Rollno="<<rollno<<endl<<"Name="<<name<<endl;
    }
};
int main(){
    int r;
    string n;
    cout<<"Enter no:";
    cin>>r;
    cout<<"Enter name:";
    cin.ignore();
    getline(cin, n);
    person pr;
    pr.set_data(r,n);
    pr.get_data();
}