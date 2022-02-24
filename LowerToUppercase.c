#include<stdio.h>
int main()
{
    char lower;
    printf("Type any lowercase character: ");
    scanf("%c",&lower);
    printf("Uppercase character : %c", lower-32);
}
