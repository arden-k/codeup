// 정수(1~100) 1개를 입력받아 1부터 그 수까지 짝수의 합을 구해보자.

#include <stdio.h>

int main() {
    int n, sum=0;
    scanf ("%d", &n);

    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    printf ("%d", sum);
    return 0;
}