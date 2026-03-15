#include <stdio.h>

int main(){

int num,digit,rev=0,temp;

printf("Enter any num ");
scanf("%d",&num);
temp=num;

while(num!=0){

    digit= num%10;
    rev=rev*10+digit;
    num/=10;
}
if(temp==rev){
    printf("It is a palindrome");
}
else{
    printf("It is not a palindrome");
}

    return 0;
}