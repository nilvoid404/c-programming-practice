#include <stdio.h>

int main()
{

int i,j;

for(i=1;i<=10;i++)
{
    printf("\nThe table of %d",i);

    for(j=1;j<=10;j++){
        printf("\n %d x %d = %d",i,j,j*i);
    }
    printf("\n");
}

    return 0;
}