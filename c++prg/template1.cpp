// function template.
// #include<iostream>
// using namespace std;
// template <typename t>
// t my_max(t a,t b){
//     (a>=b) ? cout<< a:cout<< b;
// }
// int main(){
//     my_max<int>(10,2);
//     cout<<"\n";
//     my_max<char>('l','u');
//     cout<<"\n";
//     my_max<float>(12.3,74.6);
// }

// class template:
#include<iostream>
using namespace std;
template <class T>
class show{
    public:
    T a,b;
    public:
    void get(){
        cout<<"Enter values:";
        cin>>a>>b;
    }
    void display(){
        cout<<"A="<<a<<"B="<<b<<endl;
        cout<<"total="<<a+b<<endl;
    }
    
};
int main(){
    show <int>ah;
    ah.get();
    ah.display();
    show <double>sh;
    sh.get();
    sh.display();
    show <char>ch;
    ch.get();
    ch.display();
}

