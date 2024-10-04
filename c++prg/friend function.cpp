// friend function:
#include<iostream>
using namespace std;
class Ritesh;
class Roshan{
    private:
    int money=5000;
    friend int Drashti(Roshan,Ritesh);
};
class Ritesh{
    private:
    int r_money=2000;
    friend int Drashti(Roshan , Ritesh);
};

int Drashti(Roshan rsh,Ritesh rit){
    cout<<"Total money="<<rsh.money + rit.r_money<<endl;
}

int main(){
    Roshan rh;
    Ritesh rt;
    Drashti(rh,rt);
}