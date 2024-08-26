#include <stdio.h>

int main(){
    int num1 = 0b01011;
    int num2 = num1 ^ 0b0110;
    printf("%d при  смене 1 и 2 бита превращается в %d", num1, num2);
    return 1;
}