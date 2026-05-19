#include <stdio.h>

int main(void)
{
    int a, b, tmp;

    printf("Please enter the value for the first number: ");
    scanf("%d", &a);

    printf("Please enter the value for the second number: ");
    scanf("%d", &b);

    tmp = a;
    a = b;
    b = tmp;

    printf("When the numbers are swaped, the first number would be %d and the second %d", a, b);
    return 0;
}
