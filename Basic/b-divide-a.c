// Write a program to read two integers from keyboard and check whether the first integer is exactly divisible by the second or not.

#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the first value \n");
    scanf("%d",&a);
    printf("Enter the second value \n");
    scanf("%d",&b);
    
if (b==0){
 printf("Division by 0 is not allowed");
    }
else if(a%b==0){
        printf("It is divisible");
    }
else{
    printf("It is not divisible");
}

    return 0;
}