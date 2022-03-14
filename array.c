#include<stdio.h>

int main()
{
    int i, num, average, sum=0, array[50];

    printf("How many numbers: ");
    scanf("%d", &num);

    printf("Enter Array value: ");
    // Input
    for(i=0; i<num; i++)
    {
        scanf("%d", &array[i]);
    }
    // Output
    for(i=0; i<num; i++)
    {
        printf("\n%d", array[i]);
    }
    // sum
    for(i=0; i<num; i++)
    {
        sum = sum + array[i];
    }
    printf("\nsum = %d", sum);
    // average
    printf("\naverage = %d", average=sum/num);
}
