// using of scope resolution operator (::)
#include<iostream>
using namespace std;
int num=50;  //global variable.
int main(){
    int num=30,num1=4; ///local variable
    cout<<"Num="<<num<<endl;
    cout<<"Num1="<<num1<<endl;
    cout<<"totalof num+num1=="<<num+num1<<endl;
    cout<<"::num+num+num1=="<< ::num+num1<<endl;
}