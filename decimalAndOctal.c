#include<stdio.h>

int main()
{
    int number;

    // decimal to octal
    /*
    printf("type any decimal number: ");
    scanf("%d", &number);
    printf("octal number is: %o", number);
    */
    // octal to decimal
    printf("type any octal number: ");
    scanf("%o", &number);
    printf("decimal number is: %d", number);

    return 0;
}
