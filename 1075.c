// 정수(1~100) 1개가 입력되었을 때 카운트다운을 출력해보자.

#include <stdio.h>

int main() {
    int n;
    scanf ("%d", &n);
    while (n != 0) {
        n -= 1;
        printf ("%d\n", n);
    }
    return 0;
}