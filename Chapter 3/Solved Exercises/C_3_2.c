#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Please enter your first number: ");
    scanf("%d", &a);

    printf("\nPlease enter your second number: ");
    scanf("%d", &b);

    printf("\nThe Sum of the two values is: %d\nThier diffrence is: %d\nThier Product is: %d\nThier division is: %.2f\n", a+b, a-b, a*b, (double)a/b);
    return 0;
}