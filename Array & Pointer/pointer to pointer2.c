#include<stdio.h>
void main(){
    int x=10;
    int *iptr1=&x;
    int **iptr2=&iptr1;
    int **iptr3=&iptr1;
    int ***iptr4=&iptr2;

    printf("%d\n",*iptr1);
    printf("%d\n",**iptr2);
    printf("%d\n",**iptr3);
    printf("%d\n",***iptr4);

}