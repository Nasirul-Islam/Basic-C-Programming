#include<stdio.h>

int main()
{
    int num = 1, result;

    result = sum(num);

    return 0;
}
int sum(int n)
{
    if(n!=51)
    {
        printf("%d\n", n);
        return n+sum(n+1);
    }
    else
    {
        return n;
    }
}
