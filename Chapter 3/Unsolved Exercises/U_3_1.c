#include <stdio.h>

int main(void)
{
    float a;
    int b;

    printf("Please enter a decimal number: ");
    scanf("%f", &a);

    printf("Please enter a integer number: ");
    scanf("%d", &b);

    printf("If you triple the sum of a and b you would get: %.1f (1 d.p)", (a + b) * 3);
    return 0;
}