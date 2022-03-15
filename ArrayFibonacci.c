#include<stdio.h>

int main()
{
    int i, n, a[50];

    printf("How many numbers do you want to see? ");
    scanf("%d", &n);

    a[0]=0;
    a[1]=1;

    for(i=2; i<n; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }

    for (i=0; i<n; i++)
    {
        printf("\n%d", a[i]);
    }
    return 0;
}
