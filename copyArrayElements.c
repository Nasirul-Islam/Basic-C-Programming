#include<stdio.h>

int main()
{
    int i,a2[5], a1[]= {12, 21, 43, 45, 56};
    int length = sizeof(a1)/sizeof(a1[0]);
    printf("length of array = %d\n", length);
    // array 1
    printf("array 1 = ");
    for(i=0; i<length; i++)
    {
        printf("%d ", a1[i]);
    }
    // copy elements
    for(i=0; i<length; i++)
    {
        a2[i]=a1[i];
    }
    // array 2
    printf("\narray 2 = ");
    for(i=0; i<length; i++)
    {
        printf("%d ", a2[i]);
    }
}
