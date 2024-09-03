#include <stdio.h>


int comp(int, int);


int main()
{
    int less = comp(4, 6);
    int equal = comp(7, 7);
    int more = comp(8, 3);
    printf("%d\n%d\n%d\n", less, equal, more);
    return 1;
}

int comp(int a, int b)
{
    return a >= b ? a - b : a + b;
}