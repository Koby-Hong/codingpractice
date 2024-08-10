#include <stdio.h>

int pswap(int **pa, int **pb);

int main() {
    int a, b;
    int *pa, *pb;

    pa = &a;
    pb = &b;

    printf("pa: %p\n", pa);
    printf("&pa: %p\n", &pa);
    printf("pb: %p\n", pb);
    printf("&pb: %p\n", &pb);

    printf("call func...\n");
    pswap(&pa, &pb);
    printf("call func end\n");

    printf("pa: %p\n", pa);
    printf("&pa: %p\n", &pa);
    printf("pb: %p\n", pb);
    printf("&pb: %p\n", &pb);

    return 0;
}

int pswap(int **ppa, int **ppb) {
    int *temp = *ppa;

    *ppa = *ppb;
    *ppb = temp;
    
    return 0;
}