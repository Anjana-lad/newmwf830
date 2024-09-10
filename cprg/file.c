// file handling 
#include<stdio.h>
int main(){
    FILE *fptr;
    char str[20];
    printf("Enter string:");
    gets(str);
    // fopen("path","mode");
    fptr=fopen("G:\\newmwf830\\demo.txt","w+");
    if(fptr==NULL){
        printf("File not created");
    }
    else{
        printf("File created");
        fprintf(fptr,str);
    }
    fclose(fptr);
    printf("Data entered successfully");
}