#include <stdio.h>

int main () {
    int user_answer;

    printf("컴퓨터가 생각한 숫자를 맞춰 보자!\n");

    for (;;) {
        scanf("%d", &user_answer);
        if (user_answer == 3) {
            printf("correct!\n");
            break;
        } else {
            printf("incorrect!\n");
        }
    }
    return 0;
}