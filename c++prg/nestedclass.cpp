// nested class: class inside class
#include<iostream>
using namespace std;
class A{
    public:
    class B{
        public:
        void show(){
            cout<<"I am in class B";
        }
    };
    void show1(){
        cout<<"i am in class A"<<endl;
    }
};

int main(){
    A a;  //outer class
    A::B ab;   //inner class object
    a.show1();
    ab.show();
  
}