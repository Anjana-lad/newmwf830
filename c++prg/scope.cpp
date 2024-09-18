// use of scope resolution operator.
#include<iostream>
using namespace std;
int num=50;   // golabal variable
int main(){
    int num=30; // local varaiable
    int num1,res;
    cout<<"Enter num1=";
    cin>>num1;
    res=num+num1;
    cout<<"res="<<res<<endl;
    cout<<"accessing global num"<<endl;
    cout<<"Total of all variables:"<<::num+num+num1<<endl;
}