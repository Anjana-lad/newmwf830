//hybrid inheritance:=combination of more then one inheritance is called hybrid inheritance.
#include<iostream>
using namespace std;
class P{
    public:
    int p;
    public:
    int getp(){
        cout<<"Enter P:";
        cin>>p;
    }
    int showp(){
        cout<<"P="<<p<<endl;
    }
};
class Q:public P{
    public:
    int q;
    public:
    int getq(){
        cout<<"Enter Q:";
        cin>>q;
    }
    int showq(){
        cout<<"Q="<<q<<endl;
    }
};
class R{
        public:
    int r;
    public:
    int getr(){
        cout<<"Enter R:";
        cin>>r;
    }
    int showr(){
        cout<<"R="<<r<<endl;
    }
};
class S:public Q,R{
    public:
    int res;
    public:
    int total(){
        getp();
        getq();
        getr();
        res=p+q+r;
    }
    int show(){
        showp();
        showq();
        showr();
        cout<<"Total="<<res<<endl;
    }
};

int main(){
    S s;
    s.total();
    s.show();
}
