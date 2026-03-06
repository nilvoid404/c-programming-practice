#include <stdio.h>

int main() {
  //char name[6] = {'A','B','C','D','E','F'};
  // char name[] = "ABCDEF";
   int i,j;
   for(i=1;i<=5;i++){
       for(j=1;j<=5-i;j++){
           printf(" ");
           
       }
       for(int k=1;k<=2*i-1;k++){
          printf("%c",'A'+i-1);
               } 
       
       printf("\n");
   }

    return 0;
}

/* where A=65 (ASCII value)
x=65+i-1 =65+1-1
x=65-1=64+1=A
 similarly 
 B=66
 x=65+2-1=66=B */