#include <stdio.h>

#define M 2
#define P 2

int main(){

    int matrix[M][P],i,j;

    printf("Enter the elements of Matrix");

    for(i=0;i<M;i++){
        for(j=0;j<P;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The entered matrix is :\n");
    for(i=0;i<M;i++){
        for(j=0;j<P;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }



    return 0;
}