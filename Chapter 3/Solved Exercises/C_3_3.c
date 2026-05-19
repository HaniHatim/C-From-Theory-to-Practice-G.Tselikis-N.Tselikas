#include <stdio.h>

int main(void)
{
    float Price_1, Price_2, Price_3, average;

    printf("Please enter the price for the first product: ");
    scanf("%f", &Price_1);

    printf("\nPlease enter the price for the second product: ");
    scanf("%f", &Price_2);

    printf("\nPlease enter the price for the third product: ");
    scanf("%f", &Price_3);

    average = ( Price_1 + Price_2 + Price_3 ) / 3;

    printf("\nThier average is: %.2f", average);
    return 0;

}