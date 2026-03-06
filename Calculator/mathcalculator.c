#include <stdio.h>
#include <stdbool.h>
int main()
{

int a,b;
char choice = '\0';

printf("Enter the operator(+,-,*,/) ");
scanf("%c",&choice);

printf("Enter first value ");
scanf("%d",&a);
printf("Enter second value ");
scanf("%d",&b);

switch(choice){
       case '+':
    printf("%d + %d = %d",a,b,a+b);
    break;
    
       case '-':
    printf("%d - %d = %d",a,b,a-b);
    break;
    
       case '*':
    printf("%d * %d = %d",a,b,a*b);
    break;
    
       case '/':
    printf("%d / %d = %d",a,b,a/b);
    break;
}

    return 0;
}
