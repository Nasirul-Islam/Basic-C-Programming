#include<stdio.h>

int main()
{
    char ch;
    printf("Enter any letter: ");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z')
    {
        printf("It is Capitle Letter");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("It is small letter");
    }
    else
    {
        printf("It is not a letter");
    }
    return 0;
}
