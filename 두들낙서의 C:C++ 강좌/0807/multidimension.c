#include <stdio.h>

int main() {
    int score[3][2];
    int i, j;

    for (i = 0; i < 3; i++) {

        for (j = 0; j < 2; j++) {

            printf("%dth student, subject %d: ", i+1, j+1);
            scanf("%d", &score[i][j]);

        }

    }

    for (i = 0; i < 3; i++) {

        printf("%dth student, subject 1: %d, subject 2: %d\n", i+1, score[i][0], score[i][1]);

    }

    return 0;

}