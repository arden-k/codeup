// 입력 된 정수를 비트단위로 참 / 거짓을 바꾼 후 정수로 출력해보자

#include <stdio.h>

int main() {
    int n;

    scanf ("%d", &n);
    printf ("%d", ~n); // ~ 비트단위 연산자 사용

    return 0;
}