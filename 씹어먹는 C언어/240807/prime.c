#include <stdio.h>
#include <stdbool.h>

int main() {
    int guess = 4;
    int prime[1000];
    int index = 2;
    int i;
    bool is_prime;

    prime[0] = 2;
    prime[1] = 3;

    while (index < 1000) {

        is_prime = true;

        for (i = 0; i < index; i++) {

            if (guess % prime[i] == 0) {

                is_prime = false;
                break;

            }

        }

        if (is_prime) {

            prime[index] = guess;
            index++;
            printf("%dth prime: %d\n", index, guess);

        }

        guess++;

    }

    return 0;

}