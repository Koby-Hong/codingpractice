#include <stdio.h>

int main() {
    double i, j;

    printf("input i, j:");
    scanf("%lf %lf", &i, &j);

    if (j == 0) {
        printf("division by 0\n");
        return 0;
    }

    printf("result: %f %% %f = %f /n", i, j, i/j);

    return 0;
}