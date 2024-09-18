// defining  member function outside the class
#include<iostream>
#define pi 3.14
using namespace std;
class circle{
    public:
    int radius,a;
    public:
    void getr();
    void area();
};
//data type classname :: function name
void circle :: getr(){
    cout<<"Enter radius:";
    cin>>radius;
}
void circle :: area(){
    a=pi*radius*radius;
    cout<<"area of circle="<<a<<endl;
}
int main(){
  circle cl;
  cl.getr();
  cl.area();   
}