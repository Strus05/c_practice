#include <stdio.h>


unsigned long long factorial(int a)
{
    unsigned long long mult = 1;
    for(int i = 1; i <= a; i++)
    {
        mult *= i;
    }
    return mult;
}

int main()
{
    printf("%lld\n%lld\n%lld\n", factorial(15), factorial(5), factorial (6));
    return 1;
}