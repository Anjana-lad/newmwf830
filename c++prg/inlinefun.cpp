//inline function
#include<iostream>
using namespace std;
inline int cube(int side){return side*side*side;} 
int main(){
    int side;
    cout<<"Enter side:";
    cin>>side;
    cout<<"Cube of the given number="<<cube(side)<<endl;
}