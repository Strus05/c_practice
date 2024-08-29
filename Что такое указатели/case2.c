#include <stdio.h>


int main()
{
    int var = 22;
    int* pvar = &var;
    printf("Before: %d\n", *pvar);
    *pvar = 55;
    printf("After: %d\n", *pvar);
    return 0;
}