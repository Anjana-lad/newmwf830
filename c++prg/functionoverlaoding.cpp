// function overloading: function name are same but parameter are different, or different types of parameter.
#include<iostream>
using namespace std;
class overload{
    public:
    int a,b,c;
    float x,y;
    public:
    int add_fun(int a,int b){
        return a+b;
    }
    int add_fun(int a,int b,int c){
        return a+b+c;
    }
    int add_fun(double x,double y){
        return x+y;
    }
};
int main(){
  overload ov;
  cout<<"integer function:"<<ov.add_fun(10,20)<<endl;
  cout<<"double function:"<<ov.add_fun(1.3,52.3,2.3)<<endl;
  cout<<"with 3 parameter:"<<ov.add_fun(50,40)<<endl;  
}