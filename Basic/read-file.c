//Read File
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("Prince.txt", "r");

    if(fp == NULL) {
        printf("File error");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);
    printf("\nPrince Karki");
    return 0;
}
