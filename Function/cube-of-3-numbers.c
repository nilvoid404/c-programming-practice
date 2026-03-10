#include <stdio.h>
#include <math.h>

int cube(int n)

{
    return pow(n,3);
}

int main(){

    int num1 = 2;
    int num2 = 3;
    int num3 = 4;

    int result = cube(num1);
    int result1 = cube(num2);
    int result2 = cube(num3);

    printf("The cube of %d is = %d\n",num1,result);
    printf("The cube of %d is = %d\n",num2,result1);
    printf("The cube of %d is = %d\n",num3,result2);    
    
return 0;
}

