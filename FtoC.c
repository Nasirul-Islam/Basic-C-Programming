#include<stdio.h>
int main()
{
    float c, f;
    printf("Enter Fahrenheit  Temperature: ");
    scanf("%f", &f);

    c = (f-32)/1.8;
    printf("Centigrade Temperature is = %.2f\n", c);

    return 0;
}
