#include <stdio.h>
#include <math.h>

int cube(int n)

{
    return pow(n,3);
}

int main(){

    int num1 = 2;
    int result = cube(num1);
    printf("The cube of %d is = %d\n",num1,result);
    
    
return 0;
}