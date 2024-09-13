#include<iostream>
using namespace std;
int main(){
    int arr[20];
    int num,row;
    cout<<"Enter total number of elements=";
    cin>>num;
    for(row=0;row<num;row++){
    cout<<"Enter array elements:";
    cin>>arr[row];
    }
    cout<<"Printing array elements:"<<endl;
    for(row=0;row<num;row++){
        cout<<arr[row]<<"\t";
    }
    // sorting array elements in ascending order.
    for(row=0;row<num;row++){
        for(int c=0;c<=num;c++){
            if(arr[row]<arr[c]){
                int temp=arr[c];
                arr[c]=arr[row];
                arr[row]=temp;
            }
        }
    }
    // printing in ascending order.
       cout<<"Printing array in ascending :"<<endl;
    for(row=0;row<num;row++){
        cout<<arr[row]<<"\t";
    } 
}