#include <stdio.h>

int main() {
    int num;

    printf("what is your num? :");
    scanf("%d", &num);

    if (num == 7) {
        printf("lucky\n");
    } else {
        if (num == 4) {
            printf("unlucky\n");
        } else {
            printf("normal\n");
        }
    }
    return 0;
}