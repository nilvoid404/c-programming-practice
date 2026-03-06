#include <stdio.h>

int main() {
  //char name[6] = {'A','B','C','D','E','F'};
   char name[] = "ABCDEF";
   int i,j;
   for(i=1;i<=5;i++){
       for(j=1;j<=5-i;j++){
           printf(" ");
           
       }
       for(int k=0;k<2*i-1;k++){
          printf("%c",name[k]);
               } 
       
       printf("\n");
   }

    return 0;
}
