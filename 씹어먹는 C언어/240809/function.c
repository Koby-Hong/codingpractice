#include <stdio.h>

int prime_count(int N) {
    int i, j;
    int count = 0;
    int is_prime;

    if (N < 2) return 0;

    if (N == 2) return 1;

    count++;

    for (i = 3; i <= N; i++) {
        is_prime = 1;
        for (j = 2; j < i; j++) {
            if (i%j == 0) {
                is_prime = 0;
                break;
                }
        }
        if (is_prime == 1) count++;
    }

    return count;
}

int main() {
    int N;
    printf("N: ");
    scanf("%d", &N);

    printf("Number of prime: %d\n", prime_count(N));
    return 0;
}