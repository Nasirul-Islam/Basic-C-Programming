#include<stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two integer number: ");
    scanf("%d %d", &num1, &num2);

    if(num1>num2)
    {
        printf("Large number = %d", num1);
    }
    else if(num1<num2)
    {
        printf("Large number = %d", num210);
    }
    else
    {
        printf("Both are Equal");
    }
}
