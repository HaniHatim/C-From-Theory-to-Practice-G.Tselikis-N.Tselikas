#include <stdio.h>

int main(void)
{
    int num;
    float decimal;
    char letter;

    printf("Please enter the values of a number, decimal number and a letter: ");

    scanf("%d %f %c", &num, &decimal, &letter);

    printf("The Number is: %d\n The Decimal Number is: %.2f\n The Letter is: %c\n", num, decimal, letter);
    return 0;
}