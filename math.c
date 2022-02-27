#include<stdio.h>

int main()
{
    // absolute value
    int a;
    printf("Enter an absolute value: ");
    scanf("%d", &a);

    int result1 = abs(a);
    printf("absolute value = %d\n", result1);

    // square root
    int b;
    printf("Enter a value for square root: ");
    scanf("%d", &b);

    double result2 = sqrt(b);
    printf("square root = %.3lf\n", result2);

    //x raised to the power y
    int x, y;
    printf("Enter a value for X and Y: ");
    scanf("%d %d", &x, &y);

    double result3 = pow(x, y);
    printf("value of square = %.3lf\n", result3);

    return 0;
}
