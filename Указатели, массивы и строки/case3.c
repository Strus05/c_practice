#include <stdio.h>


int main()
{
    int nums[5] = {3, 4, 5, 6, 7};
    int* pnums = nums;
    pnums += 2;
    printf("%d\t", *pnums);
    pnums++;
    printf("%d\t", *pnums);
    return 0;
}