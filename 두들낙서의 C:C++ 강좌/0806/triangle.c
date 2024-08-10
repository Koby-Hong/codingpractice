#include <stdio.h>

int main() {
    int i, j, N;

    printf("N : ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {

        for (j = 1; j <= 2*N - 1; j++) {

            if (j - N <= i - 1 && j - N >= 1 - i){

                printf("*");

            } else {
                
                printf(" ");

            }
        }

        printf("\n");

    }

    return 0;

}