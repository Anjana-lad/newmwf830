// multiple inheritance problem : how to access if both the base class have same method.
#include<iostream>
using namespace std;
class A{
    public:
    int show(){
        cout<<"i am in class A"<<endl;
    }
};
class B{
        public:
        int show(){
            cout<<"I am in class B"<<endl;
        }
};
class C :public A,B{
    public:
    int show(){
        A::show();
        B::show();
        cout<<"I am in class C"<<endl;
    }
};
int main(){
    C cc;
    cc.show();
}