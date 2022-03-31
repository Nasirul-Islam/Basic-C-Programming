#include<stdio.h>

int main()
{
    avg();
}

// avg function definition
int avg()
{
    int i;
    float nums[5], average, sum=0;
    printf("Enter some numbers: ");
    // input array
    for(i=0; i<5; i++)
    {
        scanf("%f", &nums[i]);
    }
    // print array
    for(i=0; i<5; i++)
    {
        sum = sum + nums[i];
    }
    average = sum/5;
    printf("\naverage = %f",average);
}
