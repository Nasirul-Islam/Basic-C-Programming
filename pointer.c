#include<stdio.h>

int main()
{
    int x = 9;
    int *p;

    p = &x;

    printf("value of x = %d\n", x);
    printf("address of x = %d\n", &x);

    printf("address of x = %d\n", p);
    printf("address of p = %d\n", &p);
    printf("value of p = %d\n", *p);
}
