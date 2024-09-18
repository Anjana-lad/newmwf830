#include<iostream>
using namespace std;
class employee{   // class name
  private://access modifier
    int emp_no;  // dm
    string emp_name; //dm
    public:
    void set_no(){
        emp_no=10;
    }
    void setname(){
        emp_name="Riya";
    }
    void display(){
      cout<<"Eno="<<emp_no<<endl;
      cout<<"Ename="<<emp_name<<endl;
    }
    };
int main(){
    employee emp;  // object 
    emp.set_no();
    emp.setname();
    emp.display();
}