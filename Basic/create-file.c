//Create & Write File
#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("Prince.txt", "w");

    if(fp == NULL) {
        printf("File error");
        return 0;
    }

    fprintf(fp, "Hello Prince\n");
    fclose(fp);

    printf("File written successfully");
    printf("\nPrince Karki");
    return 0;
}

