#include <stdio.h>

#define M 2
#define P 2

int main(){

    int matrix1[M][P], matrix2[M][P], diff[M][P], i, j;

    printf("Enter the first matrix:\n");
    for(i=0;i<M;i++){
        for(j=0;j<P;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("\nThe entered first matrix is:\n");
    for(i=0;i<M;i++){
        for(j=0;j<P;j++){
            printf("%d\t",matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter the second matrix:\n");
    for(i=0;i<M;i++){
        for(j=0;j<P;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }

    printf("\nThe entered second matrix is:\n");
    for(i=0;i<M;i++){
        for(j=0;j<P;j++){
            printf("%d\t",matrix2[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<M;i++){
        for(j=0;j<P;j++){
            diff[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("\nThe sum of matrix is:\n");
    for(i=0;i<M;i++){
        for(j=0;j<P;j++){
            printf("%d\t",diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}