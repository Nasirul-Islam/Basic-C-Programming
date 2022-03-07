#include<stdio.h>

int main()
{
    int num, i, count=0;

    printf("Enter any Positive number: ");
    scanf("%d", &num);

    //for(i=1; i<=num; i++)
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    //if(count==2)
    if(count==0)
    {
        printf("%d is a Prime Number\n", num);
    }
    else
    {
        printf("%d is Not a Prime Number\n", num);
    }

    return 0;
}
