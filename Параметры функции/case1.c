#include <stdio.h>


void increase5(int a)
{
    a +=5;
    printf("The number increased by five: %d", a);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    increase5(num);
}