#include <stdio.h>
int main() {
    int arr[5];
    int i, ave = 0;

    for (i = 0; i < 5; i++) {

        printf("score of %dth student: ", i+1);
        scanf("%d", &arr[i]);

        ave = ave + arr[i];

    }

    ave = ave / 5;

    printf("ave: %d\n", ave);

    for (i = 0; i < 5; i++) {

        printf("%dth student: ", i+1);

        if (arr[i] >= ave)

            printf("Pass\n");

        else

            printf("Fail\n");

    }

    return 0;

}