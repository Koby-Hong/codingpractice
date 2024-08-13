#include <stdio.h>
int main() {
    int input;

    printf("what to do?\n1. cook\n2. wash\n3. sleep\n");

    scanf("%d", &input); // 변수의 타입은 늘 char, short, int, long 중 하나

    switch (input) {

        case 1:
            printf("delicious!\n");
            break;

        case 2:
            printf("cool!\n");
            break;

        case 3:
            printf("zzz\n");
            break;

        default:
            printf("idk\n");
            break;

    }

    return 0;
    

}