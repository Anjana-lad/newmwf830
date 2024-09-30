//operator overloading : without changing the original meaning the operator and giving a special meaning to it is called operator overloading
// //syntax:
// return_type operator (operator_symbol) (classname &objectname){

// }
#include<iostream>
using namespace std;
class operator_ov{
    public :
    int num;
    public:
    void get_num(){
        cout<<"Enter number:";
        cin>>num;
    }
    int operator >(operator_ov &obj){
        if(num>obj.num){
            return 1;
        }
        else{
            return 0;
        }
    }
    int operator ==(operator_ov &uv){
        if(num==uv.num){
            return 1;
        }
        else{
            return 0;
        }
    }
};
int main(){
    operator_ov ov1,ov2;
    ov1.get_num();
    ov2.get_num();
    int res=(ov1 > ov2) || (ov1==ov2);
    cout<<"Result="<<res<<endl;
}