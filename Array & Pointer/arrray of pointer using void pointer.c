#include<stdio.h>
void main(){
    int x=10;
    char ch='A';
    double d = 20.15;

    void *arr[3]={&x,&ch,&d};//void pointer is used to store different addresses of different data types

    printf("%p\n",arr[0]);
    printf("%p\n",arr[1]);
    printf("%p\n",arr[2]);

  //  printf("%d\n",*arr[0]);//error(in void pointer direct dereferencing is not possible )
   // printf("%c\n",*arr[1]);//error
   // printf("%d\n",*arr[2]);//error

   printf("%d\n",*((int*)(arr[0])));
   printf("%c\n",*((char*)(arr[1])));
   printf("%lf\n",*((double*)(arr[2])));
   


}