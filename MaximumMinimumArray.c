#include<stdio.h>

int main()
{
    int array[100], n, i;
    // input -
    printf("How many numbers: ");
    scanf("%d", &n);
    printf("Enter numbers: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    // output -
    int max = array[0], min = array[0];
    for(i=0; i<n; i++)
    {
        if(max<array[i])
            max = array[i];
        if(min>array[i])
            min = array[i];
    }
    printf("max = %d \nmin = %d", max, min);
}
