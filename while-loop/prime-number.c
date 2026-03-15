#include <stdio.h>
#include <math.h>
int main(){
    
   int num,i,flag=0;
   
   printf("Enter the value");
   scanf("%d",&num);
   
   for(i=2;i<num;i++){
       if(num%i==0){
           flag = 1;
           break;
       }
   }
   
   if(flag==0){
       printf("It is prime");
   }
   else{
       printf("It is not prime");
   }
   
   
    return 0;
}
