#include <stdio.h>

int main(void)
{
    int a = 10;
    int NUM = 0;

    NUM = a + 2;
    a = NUM/2;

    int b = a;

    printf("%d\n", a+b);
    return 0;
}