#include <stdio.h>


int main()
{
    double high, width;
    printf("rectangle high: ");
    scanf("%lf", &high);
    printf("rectangle width: ");
    scanf("%lf", &width);
    double area = width * high;
    printf("the area of the rectangle %g", area);
    return 0;
}