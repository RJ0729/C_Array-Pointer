#include<stdio.h>
void main(){
    int arr[3][3]={10,20,30,40,50,60,70,80,90};

    printf("%p\n",&arr);//main address of whole array 
    printf("%p\n",arr);//address of all rows
    printf("%p\n",arr[0]);//address of first element in first row
    printf("%p\n",arr[1]);//address of first element in second row
    printf("%p\n",&arr[0]);//address of 1st row
    printf("%p\n",&arr[1]);//address of 2nd row
    printf("%d\n",*(*(arr+1)+1));//50
    printf("%d\n",*(*(arr+2)+1));//80
} 