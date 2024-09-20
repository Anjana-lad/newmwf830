//parameterized constructor :constructor having parameter .
#include<iostream>
using namespace std;
class Add{
    int a,b,res;
    public:
    Add(int n,int n1){
        a=n;
        b=n1;
    }
    void total(){
        res=a+b;
        cout<<"Total="<<res;
    }
};
int main(){
    int n,n1;
    cout<<"Enter n and n1:";
    cin>>n>>n1;
    Add ad(5,8);
    ad.total();
    Add ad1(n,n1);
    ad1.total();
}