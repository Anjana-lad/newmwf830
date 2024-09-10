// memory allocation using malloc
// // sum of n natural number.
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr,sum=0,num;
//     printf("Enter number of elements.");
//     scanf("%d",&num);
//     ptr= (int *)malloc(num*sizeof(int)); // 
//     if(ptr==NULL){
//         printf("Memory not allocated.");
//     }
//     else{
//         printf("Memory allocated.");
//         for(int i=0;i<num;i++){
//         scanf("%d",ptr+i);
//         sum+=*(ptr+i);
//         }
//         printf("Sum=%d",sum);
//     }
// free(ptr); //deallocate memory.
// }
/*
calloc:  it will intialise zero to the allocated memory.and it has 2 parameters. 

*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,sum=0,num;
    printf("Enter number of elements.");
    scanf("%d",&num);
    ptr= (int *)calloc(num,sizeof(int)); // 
    if(ptr==NULL){
        printf("Memory not allocated.");
    }
    else{
        printf("Memory allocated.");
        for(int i=0;i<num;i++){
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
        }
        printf("Sum=%d",sum);
    }
free(ptr); //deallocate memory.
}
