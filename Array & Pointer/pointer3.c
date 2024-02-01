#include<stdio.h>
void main(){
    double x=30.50;
    char y='A';
    double*ptr1=&x;
    char*ptr2=&y;


    printf("%p\n",ptr1);
    printf("%p\n",ptr2);
    printf("%lf\n",*ptr1);
    printf("%c\n",*ptr2);
    //printf("%c\n",y);
}