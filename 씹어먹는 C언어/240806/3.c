#include <stdio.h>

int main() {
    int i, sum;

    for (i = 1; i <= 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) sum = sum + i;
    }

    printf("sum: %d\n", sum);

    return 0;
}