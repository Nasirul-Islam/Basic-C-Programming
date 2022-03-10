#include<stdio.h>

int main()
{
    // sum
    int num1 = 20, num2 = 30, sum, *ptr1, *ptr2, *ptr3;
    ptr1 = &num1;
    ptr2 = &num2;

    printf("num1 = %d\n", *ptr1);
    printf("num2 = %d\n", *ptr2);

    sum = *ptr1 + *ptr2;
    printf("sum = %d\n", sum);

    // swap
    /*
    ptr3 = ptr1;
    ptr1 = ptr2;
    ptr2 = ptr3;

    printf("ptr1 = %d\n", *ptr1);
    printf("ptr2 = %d\n", *ptr2);
    */

    swaping(&num1, &num2);

    printf("After swaping: \n");
    printf("num1 = %d\nnum2 = %d", num1, num2);
}
void swaping(int *p1,int *p2)
{
    int p3;
    p3 = *p1;
    *p1 = *p2;
    *p2 = p3;
}
