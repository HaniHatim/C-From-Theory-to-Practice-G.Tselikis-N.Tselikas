#include <stdio.h>

int main(void)
{
    const float PI =  3.14;
    float radius, area, circumference;

    printf("Please enter the radius: ");
    scanf("%f", &radius);

    area = PI * (radius * radius);
    circumference = 2 * PI * radius;

    printf("\nThe Area of a circle is: %.2f\nThe Circumference is: %.2f", area,  circumference);
    return 0;
}