#include <stdio.h>
int main() {
    int a = 0xAF;
    int b = 0xB5;

    printf("AND: %x \n", a&b); // AND operator
    printf("OR: %x \n", a|b); // OR operator
    printf("XOR: %x \n", a^b); // XOR operator
    printf("NOT: %x \n", ~a); // NOT operator
    printf("LEFT: %x \n", a << 2);
    printf("RIGHT: %x \n", a >> 3);
    return 0;

}