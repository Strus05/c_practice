#include <stdio.h>


int main()
{
    int nums[] = {1, 3, 5, 4};
    size_t lastNums = sizeof(nums) / sizeof(nums[0]) - 1;
    for(int* pnums = nums; pnums <= &nums[lastNums]; pnums++)
    {
        printf("%d\t", *pnums);
    }
    return 0;
}