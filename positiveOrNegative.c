#include<stdio.h>

int main()
{
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);

    if(num>0)
    {
        printf("Number is Positive");
    }
    else
    {
        printf("Number is Negative");
    }

    return 0;
}
