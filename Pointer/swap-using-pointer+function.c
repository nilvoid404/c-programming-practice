#include <stdio.h>

void swap(int *a,int *b){
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
    
}

int main(){
    
    int x,y;
    printf("Enter the value of x and y ");
    scanf("%d%d",&x,&y);
    printf("The value of x = %d and y = %d\n",x,y);
    swap(&x,&y);
    
    printf("The value of x = %d and y = %d\n",x,y);
    return 0;
}

