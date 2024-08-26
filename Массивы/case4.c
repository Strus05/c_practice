#include <stdio.h>


int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};
    size_t len = sizeof(numbers) / sizeof(numbers[0]);
    for(int i=0; i<(len/2); i++)
    { 
        numbers[i] += numbers[len-1-i];
        numbers[len-1-i] = numbers[i] - numbers[len-1-i];
        numbers[i] -= numbers[len-1-i];
    }
    for(int i=0; i<len; i++)
    {
        printf("%d", numbers[i]);
    }
    return 0;
}