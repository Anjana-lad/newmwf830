// default constructor : constructor having no parameter.
#include<iostream>
using namespace std;
class Points{
    public:
    int singing, dancing;
    Points(){  // default constructor
        singing=10;
        dancing=50;
    }
    void show(){  // member function
        cout<<"Dancing="<<dancing<<endl<<"Singing="<<singing<<endl;
    }
};
int main(){
    Points pt;
    pt.show();    
}