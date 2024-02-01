#include<stdio.h>
void main(){
    char carr[4];
    printf("Enter Array Elements \n");
    for(char ch=0; ch<4; ch++){
        scanf("%c",&carr);
    }
   // scanf("%c",&carr[0]);
   // scanf("%c",&carr[1]);
   // scanf("%c",&carr[2]);
   // scanf("%c",&carr[3]);



   // for(char carr=1; carr<=1; carr++){
   //     printf("Enter the characters\n");
   //     scanf("%c",&carr);
    //}
   printf("Array Elements are \n");
   /*printf("%c\n",carr[0]);
   printf("%c\n",carr[1]);
   printf("%c\n",carr[2]);
   printf("%c\n",carr[3]);
   //printf("%c\n",carr[4]);*/

   for(char ch=0; ch<4; ch++){
    printf("%c\n",carr[0]);
   }
}