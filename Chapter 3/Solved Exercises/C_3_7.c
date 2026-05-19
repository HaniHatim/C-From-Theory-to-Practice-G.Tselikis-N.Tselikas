#include <stdio.h>

int main(void)
{
    float d1, d2, d3, temp;

    printf("Please enter the value for the first number: ");
    scanf("%f", &d1);

    printf("Please enter the value for the second number: ");
    scanf("%f", &d2);

    printf("Please enter the value for the third number: ");
    scanf("%f", &d3);

    temp = d3;
    d3 = d2;
    d2 = d1;
    d1 = temp;

    printf("\nd1 would be: %.1f\nd2 would be: %.1f\nd3 would be: %.1f", d1, d2, d3);
    return 0;
}