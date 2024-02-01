#include<stdio.h>
void main(){
    int rows,cols;
    printf("Enter rows and cols:\n");
    scanf("%d%d",&rows,&cols);
    
    int arr[rows][cols];
    int sum = 0;
    printf("Enter array elements:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
            sum=sum + arr[i][j];
        }
    printf("Array Elements:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    }
    printf("sum of array: %d\n");
    }