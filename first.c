#include<stdio.h>
int main()
{
    // printf("\n My Name is Nasirul.\n I study at BSc in CSE.\n I am a full stack Web Developer.");
    // this is single line comment
    /* this is
        multiple line
        comment
    */
    // data types
    /*
    int num1=22, num2=100;
    float num3= 40.45;
    double num4= 600.8765587;
    char myname = 'N';
    printf("I am %d years old.\n", num1);
    printf("I have taka %d.\n", num2);
    printf("He is %.2f years old.\n", num3);
    printf("He have taka %f\n", num4);
    printf("My name is %c", myname);
    */
    // scanf();
    /*
    int num;
    float oil;
    char myname;
    printf("type your name: ");
    scanf("%c", &myname);
    printf("your name is: %c", myname);
    */
    // sizeof();
    int i;
    float f = 5.65;
    double d;
    char c;
    printf("size of integer %d byte\n",sizeof(i));
    printf("this is float %.2f \n",f);
    printf("size of float %d byte\n",sizeof(f));
    printf("size of double %d byte\n",sizeof(d));
    printf("size of character %d byte\n",sizeof(c));


    return 0;
}
