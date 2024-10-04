// pure virtual function. : base class method /function is assign to 0 ;
#include<iostream>
using namespace std;
class Shape{    // abstract class
    public:
   virtual int cal_area() = 0;  // pure virtual function. 
};
class circle:public Shape{
    public:
    int radius,area_c;
    public:
    int getr(){
        cout<<"Enter radius:";
        cin>>radius;
    }
    int cal_area(){
        area_c=3.14*radius*radius;
        cout<<"Area of circle:"<<area_c<<endl;
    }
};
class rectangle :public Shape{
    public:
    int length,width,area_r;
    public:
    int getlw(){
        cout<<"Enter length and width:";
        cin>>length>>width;
    }
    int cal_area(){
        area_r=length * width;
        cout<<"Area of rectangle:"<<area_r<<endl;
    }
};
int main(){
    Shape *sh;

    circle cr;
    sh=&cr;
    cr.getr();
    sh->cal_area();

    rectangle rc;
    rc.getlw();
    sh=&rc;
    sh->cal_area();

}