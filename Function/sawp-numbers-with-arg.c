#include <stdio.h>
#include <math.h>

void swap(int a,int b);  // function declaration

int main(){
    
    int a = 5;
    int b = 6;    // pass arguments
    swap(a,b);
    return 0;
    
}

void swap(int a,int b){ // function definition

    int temp;

    temp=a;
    a=b;
    b=temp;
    
    printf("a = %d and b = %d",a,b);
    
    
    
}
