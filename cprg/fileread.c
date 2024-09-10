// program to read the data from external file in the terminal.
#include<stdio.h>
int main(){
    char str[500];
    FILE *ptr;
    ptr=fopen("G:\\newmwf830\\demo.txt","r+");
    if(ptr==NULL){
        printf("File not found");
    }
    else{
        while(fgets(str,500,ptr)!=NULL){
            printf("%s",str);
        }
    }
  //  printf("\n Data from file.");
 fseek(ptr,0,SEEK_SET);
 printf("%d",ftell(ptr));
}