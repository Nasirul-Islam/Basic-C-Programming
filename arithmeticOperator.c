#include<stdio.h>

int main()
{
    int num1, num2, result;
    printf("type two number: ");
    scanf("%d %d", &num1, &num2);

    result = num1 + num2;
    printf("sum = %d\n", result);

    result = num1 - num2;
    printf("sub = %d\n", result);

    result = num1 * num2;
    printf("multi = %d\n", result);

    result = num1 / num2;
    printf("div = %d\n", result);

    result = num1 % num2;
    printf("reminder = %d", result);

    return 0;
}
