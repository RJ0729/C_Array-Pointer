#include<stdio.h>
void main(){
    int iarr[] = {10,20,30,40,50};
    int x=10;
    char ch='R';

    printf("%d\n",x); //10
    printf("%p\n",&x);//Address of x 

    printf("%c\n",ch);//R
    printf("%p\n",&ch);//Address of ch

    printf("%ld\n",sizeof(iarr));//size of iarr (20)
    //printf("%d\n",iarr);
    printf("%p\n",iarr);//address of iarr.if i want address of 30 we write iarr+2.

}