// passing structure as a function parameter
struct student
{
    int rollno;
    char name[20];
    float marks[4];   /* data */
};
void stud_details(struct student s){
    printf("\n student details:");
    printf("\n Rollno:%d",s.rollno);
    printf("\n nmae=%s",s.name);
    for(int i=0;i<4;i++){
        printf("\n marks=%.2f",s.marks[i]);
    }
}
#include<stdio.h>
int main(){
    struct student stud;
    printf("Enter sudent id:");
    scanf("%d",&stud.rollno);
    printf("Enter name:");
    scanf("%s",&stud.name);

    for(int i=0;i<4;i++){
         printf("Enter marks:");
        scanf("%f",&stud.marks[i]);
    }

    // function call
    stud_details(stud);
}
