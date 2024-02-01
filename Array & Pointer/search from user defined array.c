#include<stdio.h>
void main(){
    int size;

    printf("Enter array size : \n");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements : \n");

    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    int search;
    printf("Enter search element: \n");
    scanf("%d",&search);

    int flag;
    for(int i=0; i<size; i++){
        flag = 1;
    }
    if(search == flag){
        printf("Element Found");
    }else{
        printf("Element Not Found");
    }
/*    for(int i=0; i<size; i++){
        Flag = 1;
        if(search == arr[i]){
            printf("Element Found \n");
        }else{
            printf("Element Not Found \n");
        }*/
    }
