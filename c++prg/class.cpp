//class is a blue print for an object. which contains data member(properties) amd member function (behaviour) for each object defined for that class.
/* syntax:
class class_name{
    access specifier/modifier:
    data member;
    access specifier:
    datatype function name(){
        //body of function
    }
};*/
// access sepecifier /modifier:
// 1. public:  
// 2. private:
// 3. protected:

//object: real world entity which is used to access the datamember and function of the class.
//syntax: classname object name;
#include<iostream>
using namespace std;
class employee{   // class name
    public: //access modifier
    int emp_no;  // dm
    string emp_name; //dm
};
int main(){
    employee emp;  // object 
    emp.emp_no=10;
    emp.emp_name="Smith";
    cout<<"Eno="<<emp.emp_no<<endl;
    cout<<"Ename="<<emp.emp_name<<endl;
}