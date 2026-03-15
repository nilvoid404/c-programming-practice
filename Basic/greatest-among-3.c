#include <stdio.h>

int main(){
    
    int a,b,c,greatest;
    
    printf("Enter a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    
   if(a>=b && a>=c){
       printf("A is greatest");
   }
   else if(b>=a && b>=c){
          printf("B is greatest");
   }
    else{
           printf("C is greatest");
    }
    
    
    
    
    return 0;
}
