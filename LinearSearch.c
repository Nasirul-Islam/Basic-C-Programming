#include<stdio.h>

int main()
{
    int i, value, position = -1, a[]= {12, 23, 43, 34, 54, 45};

    printf("Write a number that you are looking for: ");
    scanf("%d", &value);

    for(i=0; i<6; i++)
    {
        if(value == a[i])
        {
            position = i + 1;
            break;
        }

    }
    if(position == -1)
        printf("\ncould not found");
    else
        printf("\nPosition is: %d", position);
    return 0;
}
