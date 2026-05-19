#include <stdio.h>

int main(void)
{
    float num;

    printf("Please enter a decimal number: ");
    scanf("%f", &num);

    printf("%.2f is between %d and %d\n", num, (int)num, (int)num + 1);
    return 0;
}