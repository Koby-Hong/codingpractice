#include <stdio.h>

int main() {
    int height, weight;
    printf("tell me your height and weight : ");
    scanf("%d %d", &height, &weight);

    if (height >= 190 || weight >= 100) {
        printf("you are big\n");
    }

    if (!(height >= 190 || weight >= 100)) {
        printf("you are small\n");
    }

    return 0;
}