#include <stdio.h>
struct test{
    int a, b;
};

int main() {
    struct test st;
    struct test *ptr;

    ptr = &st;

    ptr->a = 1;
    ptr->b = 2;

    printf("st.a: %d\n", st.a);
    printf("st.b: %d\n", st.b);

    return 0;
}