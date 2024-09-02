// pointer arithmetic 
#include<stdio.h>
int main(){
    int arr1[]={74,85,96,23,15};
    int *ptr,*ptr1;
    ptr=&arr1[0];
    ptr1=&arr1[4];
    printf("Array elements at index 0 %d =%d",*ptr,ptr);
    printf("\n array address of last %d=%d",*ptr1,ptr1);
    ptr++;
    printf("\nvalue=%d \t ptr =%d",*ptr,ptr);
    ptr1--;
     printf("\nvalue=%d \t ptr =%d",*ptr1,ptr1);

     int k=*ptr+*ptr1;
     printf("\n total=%d",k);
}