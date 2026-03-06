#include <stdio.h>

int main(){

    int a;

    printf("Enter the value of a \n");
    scanf("%d",&a);

    if (a%6==0){
        printf("It is divisible by 6");
    }
    else{
        printf("It is not divisible by 6");
    }

return 0;

}