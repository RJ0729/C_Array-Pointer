#include<stdio.h>
void main(){
    int arr[2][3][3]={{1,2,3,4,5,6,7,8,9},{10,11,12,13,14,15,16,17,18}};
    printf("Enter Array elements :\n");
    int sum=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
               // scanf("%d\n",arr[i][j][k]);
                printf("%d\n",arr[i][j][k]);
                 /*   if(j==0){
                        sum=arr[i][j][k];
                        }*/
                printf("%d\n",sum);
            }
            printf(" \n");
           
        }
    }

    printf("%d\n",arr[0][0]);
   
}