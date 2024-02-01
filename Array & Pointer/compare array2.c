#include<stdio.h>
void main(){
    int arr1[]={1,2,3};
    int arr2[]={1,2,3};
    int flag = 0;

    for(int i=0;i<3;i++){
        if(arr1[i] == arr2[i]){
            flag == 1;
        }
        else{
           flag == 0;
        }
    }

if(flag == 0){
 printf("arrays are not equal\n");
  }
  else{  
    printf("array are equal\n");
  }
}