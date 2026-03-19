#include <stdio.h>

int main(){

    int a,b,c,smallest;

    scanf("%d%d%d",&a,&b,&c);

    smallest = (a<b && a<c) ? a : (b<c ? b : c);

    printf("Smallest = %d",smallest);

    return 0;
}
