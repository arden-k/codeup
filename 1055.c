// 하나라도 참이면 참 출력하기

#include <stdio.h>

int main() {
    int a, b;

    scanf ("%d %d", &a, &b);
    printf ("%d", a||b); // OR연산 사용

    return 0;
}