#include<stdio.h>

int main()
{
    int num = 25, result;

    result = sum(num);
    printf("%d\n", result);

    return 0;
}
int sum(int n)
{
    if(n!=5)
    {

        return n+sum(n-1);
    }
    else
    {
        return n;
    }
}
