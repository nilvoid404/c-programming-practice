#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks (0 to 100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks!\n");
    }
    else if (marks >= 90) {
        printf("You got A+\n");
    }
    else if (marks >= 80) {
        printf("You got A\n");
    }
    else if (marks >= 70) {
        printf("You got B+\n");
    }
    else if (marks >= 60) {
        printf("You got B\n");
    }
    else if (marks >= 30) {
        printf("You Passed\n");
    }
    else {
        printf("You Failed\n");
    }

    return 0;
}