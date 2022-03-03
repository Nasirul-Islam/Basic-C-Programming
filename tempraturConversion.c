#include<stdio.h>

int main()
{
    int choice;
    float temp, convertTemp;
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        {
            printf("Enter a Fahrenheit Temperature: ");
            scanf("%f", &temp);
            convertTemp = (temp-32)/1.8;
            printf("Celsius Temperature = %f", convertTemp);
            break;
        }
        case 2:
        {
            printf("Enter a Celsius Temperature: ");
            scanf("%f", &temp);
            convertTemp = (temp*1.8)+32;
            printf("Fahrenheit Temperature = %f", convertTemp);
            break;
        }
        default :
            printf("your choice is not valid");
        }
}
