#include <stdio.h>

int main () {

    int *p;
    int a;

    p = &a;

    *p = 3;

    printf("the value which is in p: %p\n", p);
    printf("the address var a is saved: %p\n", &a);

    printf("a: %d, *p: %d\n", a, *p);

    return 0;

}