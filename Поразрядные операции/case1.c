#include <stdio.h>

int main(){
    int num1 = 0b01011;
    int num2 = num1 ^ 0b0110;
    printf("number %d when bits 1 and 2 are swapped = %d", num1, num2);
    return 1;
}