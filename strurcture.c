//structure is a user defined datatype which  is used to store different type of value in a single variable name.
//syntax:
// struct structurename{
//     data members;
//     data members;

// }structure variable ;

//program to store student detail 
#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float percent;
};
int main(){
    struct student s[3] ;
    int i;
    for(i=0;i<3;i++){
    printf("Enter rollno:");
    scanf("%d",&s[i].rollno);
    printf("Enter name:");
    scanf("%s",&s[i].name);
    printf("Enter percent:");
    scanf("%f",&s[i].percent);
    }
    printf("\n Student details:\n");
    for(i=0;i<3;i++){
        printf("\n Student %d",i);
        printf("\n Rollno:%d",s[i].rollno);
        printf("\n Name=%s",s[i].name);
        printf("\n Percent=%.2f",s[i].percent);
    }  
}