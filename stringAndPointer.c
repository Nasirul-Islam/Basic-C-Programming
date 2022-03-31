#include<stdio.h>
int main()
{
    perfectNumber();
    return 0;
}

int perfectNumber()
{
    int i, num, sum=0;
    printf("Enter any number: ");
    scanf("%d", &num);

    for(i=1; i<num; i++)
    {

        if(num%i==0)
        {
            sum += i;
        }
    }
    if(num==sum)
    {
        printf("%d is Perfect Number", num);
    }
    else
    {
        printf("%d is not a Perfect Number", num);
    }
}
