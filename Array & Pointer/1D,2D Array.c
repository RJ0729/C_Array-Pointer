#include<stdio.h>
void main(){
    int arr1[]={1,2,3,4,5,6,7,8,9};
    int arr2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<9;i++){
    printf("%d\n",arr1[i]);
    
    printf("\n");
    }
    for(int row=0; row<3;row++){
        for(int col=0;col<3;col++){
            printf("%d ",arr2[row][col]);
        }
    printf("\n");
    }
    
}
