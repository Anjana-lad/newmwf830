// exception handling.
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"ENter age:";
    cin>>age;
    try{
        if(age>18){
            cout<<"Able to vote."<<endl;
        }
        else{
            throw(age);
        }
    }
    catch(int age){
        cout<<"Not able to vote."<<endl;
    }
}