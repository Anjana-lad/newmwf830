// copy constructor : it will make the copy for object of another constructor.
//syntax: classname(classname &objname);
#include<iostream>
using namespace std;
class Value{
    int a,b;
    public:
    Value(int x,int y){  // parameterized 
        a=x;
        b=y;
    }
    Value(Value &obj){    //copy constructor
        a=obj.a;
        b=obj.b;
    }
    void display(){
        cout<<"A="<<a<<endl<<"B="<<b<<endl;
    }
};
int main(){
    Value v(40,70);
    Value v1=v;
    v1.display();
    v.display();
}