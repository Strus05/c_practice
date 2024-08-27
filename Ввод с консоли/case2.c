#include <stdio.h>


int main()
{
    int num1, num2;
    double num3;
    char buffer[50];
    printf("enter the numbers in the format \"int int double\"\n");
    fgets(buffer, 50, stdin);
    sscanf(buffer, "%d %d %lf", &num1, &num2, &num3);
    printf("int1: %d\nint2: %d\ndouble: %lf\n", num1, num2, num3);
    return 0;
}