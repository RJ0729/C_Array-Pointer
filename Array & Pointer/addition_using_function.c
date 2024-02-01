#include<stdio.h>
void fun(int, int,int);
void main(){
    int x=10;
    int y=20;
    int z=30;

    fun(x,y,z);
   // fun(x,y);//default argument and default parameter concepts are not use in C.

}
void fun(int x,int y,int z){
    printf("Add = %d\n",x+y+z);
}