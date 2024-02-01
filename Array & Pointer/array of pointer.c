#include<stdio.h>
void main(){
    int x=10;
    int y=20;
    int z=30;

    int* arr[3]={&x, &y, &z};
    printf("%ld\n",sizeof(arr));//24 shuld be the op but my op will be 12 just look on it  

    printf("%p\n",arr[0]);
    printf("%p\n",arr[1]);
    printf("%p\n",arr[2]);

    printf("%d\n",*arr[0]);
    printf("%d\n",*arr[1]);
    printf("%d\n",*arr[2]);



}