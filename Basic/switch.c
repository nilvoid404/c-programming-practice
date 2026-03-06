#include <stdio.h>

int main()
{

char day = '\0';

printf("Enter day as (M,T,W,H,F,S,I)");
scanf("%c",&day);

switch(day){

case 'M':
printf("It is Monday");
break;

case 'T':
printf("It is Tuesday");
break;

case 'W':
printf("It is Wednesday");
break;

case 'H':
printf("It is Thursday");
break;

case 'F':
printf("It is Friday");
break;

case 'S':
printf("It is Saturday");
break;

case 'I':
printf("It is Sunday");
break;

deafult:
printf("Choose from options only!");

}




    return 0;
}