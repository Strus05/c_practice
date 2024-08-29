#include <stdio.h>


int main()
{
    const long num = 2542;
    const long* pnum = &num;
    char* const pstr = "Hello";
    printf("Long: %ld,\t String: %s\n", *pnum, pstr);
    return 0;
}