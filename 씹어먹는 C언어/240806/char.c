#include <stdio.h>
int main() {
    double celsius; // 섭씨 온도

    printf("this is the program which changes celsius to fahrenhiet\n");

    printf("celsius:");
    scanf("%lf", &celsius);

    printf("celsius %f to fahrenhiet %f\n", celsius, 9*celsius/5 + 32);
    return 0;
}