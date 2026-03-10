#include <stdio.h>

int area(int l,int b)

{
    return l*b;
}

int main(){

    int length = 2;
    int breadth = 5;
    int result = area(length,breadth);
    printf("The area of rectangle is = %d\n",result);
    
    
return 0;
}
