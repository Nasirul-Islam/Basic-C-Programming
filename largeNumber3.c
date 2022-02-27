#include<stdio.h>

int main()
{
    float num1, num2, num3;
    printf("Enter 3 Number: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    if(num1>num2 && num1>num3)
    {
        printf("Large Number = %f", num1);
    }

    else if(num2>num1 && num2>num3)
    {
        printf("Large Number = %f", num2);
    }

    else if(num3>num1 && num3>num2)
    {
        printf("Large Number = %f", num3);
    }
    else
    {
        printf("Numbers are Equal");
    }
}
