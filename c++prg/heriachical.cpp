//heriachical inheritance:Will have one base class and multiple child class of it.
#include<iostream>
#define pi 3.14
using namespace std;
class shape{
    public:
         string shape_name;
    public:
        void getname(){
            cout<<"Enter shape name:";
            cin>>shape_name;
        }
        void display(){
            cout<<"Shape_name="<<shape_name<<endl;
        }
};
class circle:public shape{
    public:
    float radius,area_c;
    public:
    void Area_c(){
        getname();
        cout<<"Enter radius:";
        cin>>radius;
        area_c=pi*radius*radius;
    }
    void show_c(){
        display();
        cout<<"Area of circle="<<area_c<<endl;
    }

};
class rectangle :public shape{
    public:
    int length,width,area_r;
    public:
    void Area_r(){
        getname();
        cout<<"Enter length and width:";
        cin>>length>>width;
        area_r=length*width;
    }
    void show_r(){
        display();
        cout<<"Area of rectangle="<<area_r<<endl;
    }
};
int main(){
    circle cr;
    rectangle rect;
    cr.Area_c();
    cr.show_c();
    rect.Area_r();
    rect.show_r();
}


// 1. wap to read and print employee information using multiple inheritance.
//2. wap to having class name fruit with data_member to calculate number of fruits in a basket.
// create 2 other classes apple and mango to calculate number of apples and mangoes in a basket print the n umber of fruits of each type and total number of fruits in a basket.