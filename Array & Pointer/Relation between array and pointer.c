#include<stdio.h>
void main(){
    int size;
    printf("Enter array size:\n");
    scanf("%d\n",&size);

    int arr[size];
    printf("Enter array elements:");
    for(int i=0;i<size;i++){
        scanf("%d\n",&arr[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
        printf("%d\n",*(arr+i));
    }
}