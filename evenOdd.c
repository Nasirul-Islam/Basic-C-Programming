#include<stdio.h>

int main()
{
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);

    if(x%2==0)
        printf("Even\n");
    /*
    if(x%2!=0)
        printf("Odd\n");
    */
    else
        printf("Odd\n");

    return 0;
}
