#include<stdio.h>
void main(){
    int x=10;
    //wild pointer
    int*iptr=0;//0=Null ,it is use to assign pointer and value will be stored in future
    iptr=&x;
    printf("%d\n",*iptr);
}