// multiple inheritance : ther will be 2 parent and one child class.
#include<iostream>
using namespace std;
class Mom{
public:
    int m_money;
    public:
    int get_m_money(){
        cout<<"Enter mom money:";
        cin>>m_money;
    }
    void m_show(){
      cout<<"Mom's money="<<m_money<<endl;
    }
};
class Dad{
    public:
    int d_money;
    public:
    int get_d_money(){
        cout<<"Enter dad's money:";
        cin>>d_money;
    }
    void d_show(){
      cout<<"Dad's money="<<d_money<<endl;
    }
};
class child :private Mom ,Dad{
    public:int total_m;
    public:
    int get_all(){
        get_m_money();
        get_d_money();
        total_m= m_money+d_money;
    }
    void show(){
        m_show();
        d_show();
        cout<<"Total money ="<<total_m<<endl;
    }
};
int main(){
    child ch;
    ch.get_all();
    ch.show();
}