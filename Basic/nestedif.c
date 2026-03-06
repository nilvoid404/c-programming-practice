#include <stdio.h>
#include <stdbool.h>
int main()
{

float price = 10.0;
bool isStudent = true;
bool isSenior = false;

if(isStudent){
    if(isSenior){
        printf("You get the student discount of 10%\n");
          printf("You get the senior discount of 20%\n");
          price *= 0.7;
    }
    else{
        printf("You get the Student discount of 10%\n");
        price *= 0.9;
    }
}
else
if(isSenior){
    printf("You get the seniot discount of 20%\n");
price *=0.8;
    
}

printf("The price of the ticket is %.2f$",price);
    return 0;
}
