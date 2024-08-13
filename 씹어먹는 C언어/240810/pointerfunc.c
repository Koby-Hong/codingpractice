#include <stdio.h>
int change_val(int *pi) {
    printf("---- start change_val ----\n");
    printf("pi: %p\n", pi);
    printf("*pi: %d\n", *pi);

    *pi = 3;

    printf("---- end change_val ----\n");
    return 0;
}

int main() {
    int i = 0;

    printf("&i: %p\n", &i);
    printf("before i: %d\n", i);
    change_val(&i);
    printf("after i: %d\n", i);

    return 0;
}