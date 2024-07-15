#include <stdio.h>

int main()
{
    char var1 = 'F';
    int var2 = 10u;
    float var3 = 3.14f;
    double var4 = 3.14159l;
    printf("var1 = %c; \nvar2 = %d; \nvar3 = %f; \nvar4 = %lf.\n", var1, var2, var3, var4);
    return 0;
}