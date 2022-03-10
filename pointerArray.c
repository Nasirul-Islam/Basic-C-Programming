#include<stdio.h>

int main()
{
    int a[5]= {20, 30, 40, 50, 60};
    int *ptr, i;

    ptr = &a[0];

    printf("array: ");
    i=0;
    while(i<5)
    {
        printf("%d, ", *ptr);
        ptr++;
        i++;
    }
}
