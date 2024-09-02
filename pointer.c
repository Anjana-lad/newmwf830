// pointer is a user-defined data-type which is used to store the address of another variable.
#include<stdio.h>
int main(){
    int num;
    int *ptr;
    printf("Enter number:");
    scanf("%d",&num);
    printf("Num=%d \n address=%p",num,ptr);
    ptr=&num;
    printf("\n Value at ptr=%d",*ptr);
}

// %p =hexa decimal value