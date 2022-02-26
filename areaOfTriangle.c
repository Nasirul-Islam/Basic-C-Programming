#include<stdio.h>

int main()
{
    float base, height, area;

    printf("Base of triangle = ");
    scanf("%f", &base);

    printf("Height of triangle = ");
    scanf("%f", &height);

    // area = 0.5 * base * height;
    area = (float)1/2 * base * height;

    printf("Area of Tringle is = %.2f\n", area);

    return 0;
}
