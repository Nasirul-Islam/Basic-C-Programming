#include<stdio.h>

int main()
{
    float c, f;

    printf("Enter Centigrade Temperature: ");
    scanf("%f", &c);

    f = (c*1.8)+32;
    printf("Fahrenheit Temperature is = %.2f\n", f);

    return 0;
}
