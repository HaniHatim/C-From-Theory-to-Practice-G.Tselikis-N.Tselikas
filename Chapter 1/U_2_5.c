#include <stdio.h>

int main(void)
{
   int const c = -1;
   int a = -5, b = -10;

    printf("%d %d\n", a*c, b*c);
    return 0;
}