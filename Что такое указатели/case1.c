#include <stdio.h>


int main()
{
    int var = 52;
    int* pvar = &var;
    printf("Address: %p,\t var = %d\n", (void*)pvar, *pvar);
    return 0;
}