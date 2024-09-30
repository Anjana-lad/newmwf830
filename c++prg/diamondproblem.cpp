//diamond problem :the problem is that if we have multiple and multi level inheritance.and we  want to access the method of base class in child class then from which class the method will inherit.
#include<iostream>
using namespace std;
int p,q,r,s;
class grandparent {
     public:
    void getpq(){
        cout<<"P=";
        cin>>p;
        cout<<"Q=";
        cin>>q;
    }
    void pq(){
        cout<<"P="<<p<<"\n Q="<<q<<endl;
    }

};
class parent: virtual public grandparent{
    public:
    void getr(){
        cout<<"R=";
        cin>>r;
    }
    void pr(){
        cout<<"R="<<r<<endl;
    }
};
class Uncle: virtual public grandparent{
    public:
    void gets(){
        cout<<"S=";
        cin>>s;
    }
    void ps(){
        cout<<"S="<<s<<endl;
    }
};

class child:public parent, Uncle{
    public:
    int res;
    public:
    void us(){
        getpq();
        getr();
        gets();
        res=p+q+r+s;
    }
    void total(){
        pq();
        pr();
        ps();
        cout<<"Total ="<<res<<endl;
    }

};
int main(){
    child ch;
    ch.us();
    ch.total();
}