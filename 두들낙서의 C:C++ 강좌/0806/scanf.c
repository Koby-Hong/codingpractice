#include <stdio.h>

int main() {

    char ch;

    short sh;
    int i;
    long lo;

    float fl;
    double du;
    
    printf("char: ");
    scanf("%c", &ch);

    printf("short: ");
    scanf("%hd", &sh);

    printf("int: ");
    scanf("%d", &i);

    printf("long: ");
    scanf("%ld", &lo);

    printf("float: ");
    scanf("%f", &fl);

    printf("double: ");
    scanf("%lf", &du);

    printf("char: %c, short: %d, int: %d\n", ch, sh, i);
    printf("long: %ld, float: %f, double: %f", lo, fl, du);

}