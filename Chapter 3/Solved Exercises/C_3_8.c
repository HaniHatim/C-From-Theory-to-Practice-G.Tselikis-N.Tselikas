#include <stdio.h>

int main(void)
{
    float a, divide, remiander;
    int b;

    printf("Please enter the first number: ");
    scanf("%f", &a);

    printf("please enter the second number: ");
    scanf("%d", &b);

    divide = a / b;

    remiander = a - (b * (int)divide);

    printf("The Remiander is: %.2f", remiander);
    return 0;
}