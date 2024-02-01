#include<stdio.h>
void main(){
    int x=10;
    int*iptr= &x;
    void*vptr= &x;

    printf("%p\n",iptr);
    printf("%p\n",vptr);

    printf("%d\n",*iptr);
    //printf("%d\n",*vptr);//EROOR:dereferencing 'void *' pointer 
    printf("%d\n",*((int*)vptr));//TYPE CASTING IS USED FOR DEREFENCING
}