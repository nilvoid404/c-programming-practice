#include <stdio.h>

int main()
{

int rev=0,num,digit;

printf("Enter any number ");
scanf("%d",&num);

while(num!=0){

    digit = num%10;
    rev=rev*10+digit;
    num /=10;
}

printf("The reverse is %d",rev);

    return 0;
}