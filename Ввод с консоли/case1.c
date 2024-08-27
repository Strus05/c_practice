#include <stdio.h>


int main()
{
    int num1, num2;
    double num3;
    printf("enter the numbers in the format \"int int double\"\n");
    scanf("%d %d %lf", &num1, &num2, &num3);
    printf("int1: %d\nint2: %d\ndouble: %lf\n", num1, num2, num3);
    return 0;
}