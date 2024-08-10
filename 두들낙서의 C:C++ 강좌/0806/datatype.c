#include <stdio.h>
int main() {
    int a;
    double b;
    /*
    산술변환: 자료형이 다른 두 변수를 연산할 때 숫자의 범위가 큰 자료형으로 바뀜
    */

    a = 10;
    b = 3;

    printf("a/b: %.3f\n", a/b);
    printf("b/a: %.3f\n", b/a);
    /*
    실수 자료형으로 출력됨. 따라서 소수점 지정도 가능.
    */

    return 0;

}