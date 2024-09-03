#include <stdio.h>


void doubled(const int a)
{
    int b = 2 * a;
    printf("doubled value: %d", b);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    doubled(num);
}