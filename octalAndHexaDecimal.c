#include<stdio.h>
int main()
{
    int num;

    // octal to hexa-decimal
    /*
    printf("type any octal number: ");
    scanf("%o", &num);
    printf("hexa-decimal is: %x", num);
    */
    // hexa-decimal to octal
    printf("type any hexa-decimal: ");
    scanf("%x", &num);
    printf("octal is: %o", num);
}
