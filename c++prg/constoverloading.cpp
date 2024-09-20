// constructor overloading : having more then one constructor in a class.
#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length,width,area;
    public:
    Rectangle();
    Rectangle(int,int);
    void area_r();
};
Rectangle::Rectangle(){
    cout<<"Enter length and width:";
    cin>>length>>width;
}
Rectangle::Rectangle( int l,int w){
    length=l;
    width=w;
}
void Rectangle ::area_r(){
    area=length*width;
    cout<<"Area of rectangle="<<area<<endl;
}
int main(){
    Rectangle rect(4,8);
    rect.area_r();
    Rectangle r1;
    r1.area_r();
}