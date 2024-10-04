// rum-time polymorphism (late binding/dynamic binding) : function/method  overriding  
#include<iostream>
using namespace std;
class A{
    public:
    virtual void show(){
        cout<<"I am in class A"<<endl;
    }
};
class B :public A{
    public:
    void show(){
        cout<<"I am in class B"<<endl;
    }
};
int main(){
    B b;
    A *a;
    a=&b;
    a->show();
}