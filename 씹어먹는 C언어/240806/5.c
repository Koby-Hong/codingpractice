#include <stdio.h>

int main() {
    int i, N, factorial = 1;

    printf("N? : ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        
        factorial *= i;

    }

    printf("factorial: %d\n", factorial);

    return 0;

}