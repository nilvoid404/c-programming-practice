#include <stdio.h>
#include <stdbool.h>

int main() {

int age = 20;   // %d
float height = 180.2;   // %f
double weight = 74.367; //%lf
char gender ='M'; // %c
char name[] ="Prince Karki"; // %s


printf("My name is %s.\nMy Gender is %c.\nMy height is %.2fcm and my weight is %.3lfkg and my age is %d.",name,gender,height,weight,age);

    return 0;
}