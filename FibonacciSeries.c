#include<stdio.h>

int main()
{
    int num, firstnum=0, secondnum=1, i, sum;
    printf("Enter any number: ");
    scanf("%d", &num);

    for(i=0; i<num; i++)
    {
        if(i<=1)
        {
            sum = i;
        }
        else
        {
            sum = firstnum + secondnum;
            firstnum = secondnum;
            secondnum = sum;
        }
        printf("%d\n\n", sum);

    }
    printf("Fibonacci Number = %d\n", sum);
    return 0;
}
