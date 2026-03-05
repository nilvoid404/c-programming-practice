#include <stdio.h>

int main(){

    float pounds = 0.0;
    float kilogram = 0.0;
    int choice = 0;

    printf("Weight Conversion Calculator\n");
    printf("1. Pounds to Kilogram\n");
    printf("2. Kilogram to Puuds\n");
    printf("Choose option 1 or 2\n");
    scanf("%d",&choice);

 if (choice ==1){
        printf("1. Pounds to Kilogram\n");
        printf("Enter your weght in Pounds");
        scanf("%f",&pounds);
        kilogram = pounds / 2.204;
        printf("The %.2f Pounds is equal to %.2f Kilogram\n",pounds,kilogram);
    }
else if (choice==2){
        printf("1. Pounds to Kilogram\n");
         printf("Enter your weght in Kilogram");
        scanf("%f",&kilogram);
        pounds = kilogram * 2.204;
        printf("The %.2f Kilogram is equal to %.2f Pounds\n",kilogram,pounds);
}
else{
    printf("CHoose a valid option!");
}



    return 0;
}