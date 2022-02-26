// write a program that take two integer and display sum
#include<stdio.h>
int main()
{
    int num1, num2, sum;
    float avg;

    printf("type to integer: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    printf("there sum is: %d", sum);

    avg = (float)sum/2;
    printf("The Average is: %.2f\n", avg);

    return 0;
}
