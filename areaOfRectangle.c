#include<stdio.h>

int main()
{
    float length, width, area;

    printf("Length = ");
    scanf("%f", &length);

    printf("Width = ");
    scanf("%f", &width);

    area = length * width;
    printf("The area of Rectangle = %.2f\n", area);

    return 0;
}
