#include <stdio.h>

int main()
{
    float maths,physics,digitallogic,cprogramming,iit;
    float total;
    
    printf("Enter your GPA of Maths\n");
    scanf("%f",&maths);
    printf("Enter your GPA of Physics\n");
    scanf("%f",&physics);
    printf("Enter your GPA of Digital Logic\n");
    scanf("%f",&digitallogic);
    printf("Enter your GPA of C Programming\n");
    scanf("%f",&cprogramming);
    printf("Enter your GPA of IIT\n");
    scanf("%f",&iit);
    
    total = (maths+physics+digitallogic+cprogramming+iit)/5.0;
    
    printf("Your total Grade gpa is %.2f ",total);



    return 0;
}