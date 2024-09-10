// nested structure structure inside structure
#include<stdio.h>
struct employee{
    int eid;
    float salary;
    struct department{
        int dep_id;
        char dep_name[20];
    }dept;
}emp[2];
int main(){
    int i;
    for(i=0;i<2;i++){
        printf("Enter employee id:");
        scanf("%d",&emp[i].eid);
        printf("Enter salary:");
        scanf("%f",&emp[i].salary);
        printf("Enter department id:");
        scanf("%d",&emp[i].dept.dep_id);
        printf("Enter department name:");
        scanf("%s",&emp[i].dept.dep_name);
    }
       for(i=0;i<2;i++){
    printf("\n Employee details:");
 
    printf("\n Eid=%d",emp[i].eid);
    printf("\n salary:%.2f",emp[i].salary);
    printf("\n Department id:%d",emp[i].dept.dep_id);
    printf("\n Department name:%s",emp[i].dept.dep_name);
    }
}