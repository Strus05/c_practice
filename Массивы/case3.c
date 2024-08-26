#include <stdio.h>


int main()
{
    int numbers[4] = {1, 2, 3, 4};
    for(int i = 0; i<4; i++)
    {
        numbers[i] *= 2;
        printf("%d\n", numbers[i]);
    }
    return 0;
}