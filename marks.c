#include<stdio.h>

int main()
{
    float mark;
    printf("Enter your mark: ");
    scanf("%f", &mark);

    if(mark>=90)
    {
        printf("Golden A+");
    }

    else if(mark>=80)
    {
        printf("A+");
    }

    else if(mark>=70)
    {
        printf("A-");
    }

    else if(mark>=60)
    {
        printf("Golden B");
    }

    else if(mark>=50)
    {
        printf("Golden B-");
    }

    else if(mark>=40)
    {
        printf("Golden C");
    }
    else
    {
        printf("Faill");
    }

    return 0;
}
