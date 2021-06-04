// 영문자(a~z) 1개가 입력되었을 때 그 문자까지의 알파벳을 순서대로 출력해보자.

#include <stdio.h>

int main() {
    char c, t='a';
    scanf ("%c", &c);

    do {
        printf("%c ", t);
        t += 1;
    } while (t < c+1); // 조건검사: t가 입력한 영문자 보다 작은 동안
    return 0;
}