#include <stdio.h>

int main()
{
    for(int i = 0; i<7; i++)
    {
        for(int j = 0; j<7; j++)
        {
            i == j || (i+j) == 6 ? printf("*") : printf(" ");
        }
        printf("\n");
    }
    return 1;
}