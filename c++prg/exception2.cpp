// program to check divide by zero not possible.
#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter values:";
    cin>>x>>y>>z;
    try{
        if(x-y!=0){
            int p=z/(x-y);
                cout<<"Result="<<p<<endl;
            }
        
        else{
            throw(x-y);
        }
    }
    catch(int r){
        cout<<"Number divide by zero not possible as it is "<<r<<endl;
    }
}