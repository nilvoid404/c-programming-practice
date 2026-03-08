#include <stdio.h>

#define M 2
#define P 2


int main(){

int matrix[M][P],traspose[M][P],i,j;

printf("Enter the matrix\n");
for(i=0;i<M;i++){
    for(j=0;j<P;j++){
        scanf("%d",&matrix[i][j]);
    }
}
printf("The transpose of matrix is\n");
for(i=0;i<M;i++){
    for(j=0;j<P;j++){
        printf("%d\t",matrix[j][i]);
    }
    printf("\n");
}



    return 0;
}