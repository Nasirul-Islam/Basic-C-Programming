#include<stdio.h>
//#include<math.h>

int main()
{
    float radius, area;

    printf("Enter Radius Value: ");
    scanf("%f", &radius);

    area = 3.1416 * radius * radius;
    //area = M_PI * radius * radius;

    printf("Area of Circle is = %.2f", area);
}
