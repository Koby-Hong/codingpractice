#include <stdio.h>
int main() {
    int a, b;
    float c, d;

    printf("input two number : ");
    scanf("%d %d", &a, &b);

    c = a/b;
    d = (float) a/b;

    printf("ratio: %f %f \n", c, d);

    return 0;
}