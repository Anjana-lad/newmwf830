// destructor :
#include<iostream>
using namespace std;
class cube{
    int a;
    public:
    cube(int s){  // constructor
        a=s;
    }
    int cube_fun(){
        return a*a*a;
    }
    ~cube(){   //destructor
        cout<<"destructor is called here..."<<endl;
    }
};
int main(){
    cube cb(7);
    cout<<"Cube of number="<<cb.cube_fun()<<endl;
    cout<<"Calling destructor "<<endl;
}