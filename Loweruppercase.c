#include<stdio.h>

int main()
{
    char lower, upper;
    // lower to upper
    /*
    printf("type any lowercase letter: ");
    scanf("%c", &lower);
    upper = toupper(lower);
    printf("uppercase letter: %c", upper);
    */
    // upper to lower
    printf("type any uppercase letter: ");
    scanf("%c", &upper);
    lower = tolower(upper);
    printf("lowercase letterL: %c", lower);
    return 0;
}
