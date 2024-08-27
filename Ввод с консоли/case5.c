#include <stdio.h>


int main()
{
    float feetPerMeter = 3.281;
    float feet;
    printf("Enter the feet: ");
    scanf("%f", &feet);
    float meter = feet / feetPerMeter;
    printf("At %g feet %g meters", feet, meter);
    return 1;
}