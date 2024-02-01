#include<stdio.h>
void printArr1(int *ptr,int arrSize){
    for(int i=0;i<arrSize;i++){
        printf("%d\n",*(ptr+i));
        
    }
}
// void printArr2(int arr[], int arrSize){
//     for(int i=0; i<arrSize;i++){
//         printf("%d\n",arr[i]);//arr[i]=*(arr+i)
//     }
// }//everyone passes whole array like this but we shuld pass the array like printArr1 function in pointer form. Because we know array is internall pointer.
//alse remember here the size of array shuld not be specified in arr[] printArr1 function parameter the square braacket shuld be empty,because if we write direct function at that time we dont know the array values in a team project.

void main(){
    int arr[]={10,20,30,40,50};
    int arrSize = sizeof(arr)/sizeof(int);
    printArr1(arr,arrSize);
}