// manipulators function to display the output in the terminal.
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int c,a=20,b=60;
    cout<<"Enter numbers:";
    cin>>c;
    cout<<"C="<<setw(5)<<c<<endl<<"A="<<setw(5)<<a<<endl<<"B="<<setw(5)<<b<<endl;
    float p1=3.14852;
    cout<<"Pi="<<setprecision(4)<<p1<<endl;
    cout<<fixed;
    cout<<"Pi="<<setprecision(3)<<p1<<endl;
    cout<<"setfill"<<endl;
    cout<<"c="<<setw(10)<<setfill('x')<<c<<endl;
}