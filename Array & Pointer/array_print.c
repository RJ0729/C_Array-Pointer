#include<stdio.h>
void main(){
    int arr[]={10,20,30,40,50};
    int arrSize= sizeof(arr)/sizeof (int);
    for(int i=0;i<arrSize;i++){
        printf("%d\n",arr[i]);
    }
}