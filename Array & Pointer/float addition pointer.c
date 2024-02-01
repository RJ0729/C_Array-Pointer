#include<stdio.h>
void main(){
    char ch1='A';
    char ch2='B';

    char*ptr=&ch1;

    
    printf("%p\n",ptr);
    printf("%c\n",*ptr);

//addition of float pointer is not valid,only integer addition and subtraction is valid.
    printf("%p\n",(ptr+1.5));
    printf("%c\n",*(ptr+1.5));
}