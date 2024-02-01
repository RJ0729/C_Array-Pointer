#include<stdio.h>
void main(){
    int arr1[3]={1,2,3};
    printf("Array1:\n");
    for(int i=0; i<3 ;i++)
    {
        printf("%d\n",arr1[i]);
    }
    int arr2[3];
    printf("Array2:\n");
    for(int i=0; i<3; i++){
        arr2[i]= arr1[i] * 10;
    }

    for(int i=0; i<3; i++){
        printf("%d\n",arr2[i]);
    }

}
