#include <stdio.h>
#include <math.h>

int main(){

int sum=0,temp,num,digit;
printf("Enter a number ");
scanf("%d",&num);

temp=num;

while(num!=0){
    digit =num%10; //gives last number for example 153 = 3
    sum += pow(digit,3); //it squares the digit
    num /=10; // removes the decial point from 153/10=15.3 remove 3 so its 15
}

if(temp==sum){
    printf("It is armstrong number");
}
else{
    printf("It is not");
}
return 0;
}