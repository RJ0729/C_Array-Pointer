#include<stdio.h>
int x= 98;
char y='A';
void main(){

    float z= 1.1;
    double w=20.98;

    int*ptr1=&x;//to assign the pointer 
    char*ptr2=&y;
    float*ptr3=&z;
    double*ptr4=&w;

    printf("%p\n",ptr1);//to print adress of pointer1
    printf("%p\n",ptr2);
    printf("%p\n",ptr3);
    printf("%p\n",ptr4);

    printf("%d\n",*ptr1);//to print the value in pointer1
    printf("%c\n",*ptr2);
    printf("%f\n",*ptr3);
    printf("%lf\n",*ptr4);
}