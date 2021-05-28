// 두 개의 참 또는 거짓이 입력될 때, 모두 참일 때에만 참을 출력하는 프로그램을 작성해보자.

#include <stdio.h>

int main() {
    int a, b;

    scanf ("%d %d", &a, &b);
    printf ("%d", a&&b); // AND 연산 사용

    return 0;
}