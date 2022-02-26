#include<stdio.h>

int main()
{
    double a, b, c, d, area, s;

    printf("type the length of 3 sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("the area of triangle is : %.2lf", area);

    return 0;
}
