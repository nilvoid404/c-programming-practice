#include <stdio.h>
#include <math.h>

void swap();  // function declaration

int main(){
    
    swap();  // function call
    
    return 0;
    
}

void swap(){ // function definition
    
    int a,b,temp;
    
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    printf("a = %d and b = %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    
    printf("a = %d and b = %d",a,b);
    
    
}
