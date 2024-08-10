#include <stdio.h>

int main() {
    int n = 1, n_minus = 1, n_minus_2 = 1;
    int i = 3, sum = 1;

    while (n <= 1000000) {
    
        n = n_minus + n_minus_2;
    
        if (i % 2 == 0) {
    
            sum = sum + n;
    
        }
    
        i++;
        n_minus_2 = n_minus;
        n_minus = n;
    
    }
    
    printf("sum: %d \n", sum);

    return 0;
}