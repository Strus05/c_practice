#include <stdio.h>

int main(){
    int num1 = 6;
    int num2 = 7;
    int num3 = 9;
    if(num1 > num2 && num1 > num3)
        printf("1st number is biggest");
    else if(num2 > num3)
        printf("2nd number is biggest");
    else
        printf("3rd number is biggest");
    return 1;
}