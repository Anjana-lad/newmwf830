// // spiral algorithm
// step 1 : define array [size][size];
// step2 :
//  for col :
//  1. from left to right.
//  2. from top to bottom.
//  3. from right to left.
//  4. from bottom to top.

//  step 3: loop for inner sq row loop till (size/2);

//  variable size, row=0,col,num,end=size-1;

#include<stdio.h>
int main(){ 
    int size;
    printf("Enter size:");
    scanf("%d",&size);
    int arr[size][size];
    int row=0,col,num=1,end=size-1;

    for(row=0;row<=size/2;row++ ,end--){
    //step 2: loop for left to right.
    for(col=row;col<=end;col++){
        arr[row][col]=num++;
    }
    // loop for top to bottom.
    for(col=row+1;col<=end;col++){
        arr[col][end]=num++;
    }
    // loop for right to left
    for(col=end-1;col>=row;col--){
        arr[end][col]=num++;
    }

    // loop for bottom to top
    for(col=end-1;col>row;col--){
        arr[col][row]=num++;
    }
   }
    // print array:
    for(row=0;row<size;row++){
        printf("\n");
        for(col=0;col<size;col++){
            printf("%d \t",arr[row][col]);
        }
    }
}