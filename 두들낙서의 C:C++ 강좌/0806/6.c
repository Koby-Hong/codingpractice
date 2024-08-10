#include <stdio.h>

int main() {
    int a, b, count = 0;

    for (a = 3; a <= 1997; a++) {

        for (b = 2; b < a; b++) {

            if (2000 - a - b > 0 && 2000 - a - b < b) {

                count++;

            } 
        }
    }

    printf("count: %d\n", count);

    return 0;
}