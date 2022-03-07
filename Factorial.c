#include<stdio.h>

int main()
{
    int factorial=1, num, i;
    printf("Enter any number: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial value of %d = %d", num, factorial);

    return 0;
}
