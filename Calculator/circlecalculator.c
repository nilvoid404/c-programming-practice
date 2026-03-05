#include <stdio.h>
#include <math.h>

int main() {

double area = 0.0;
double surfacearea = 0.0;
double volume = 0.0;
double radius = 0.0;
const double PI = 3.14159;

printf("Enter the value of Radius\n");
scanf("%lf",&radius);

// calculations
area = PI * pow(radius,2);
surfacearea = 4 * PI * pow(radius,2);
volume = ((4.0)/(3.0)) * PI * pow(radius,3);

// outputs
printf("Area = %lf\n",area);
printf("Surface Area = %lf\n",surfacearea);
printf("Volume = %lf\n",volume);


return 0;
}