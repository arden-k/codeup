// 출석 번호를 n번 무작위로 불렀을 때, 부른 번호를 거꾸로 출력해 보자.

#include <stdio.h>

int main() {
    int n;
    int a[10000] = {0};
    scanf ("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        scanf ("%d", &a[i]);
    }

    for (int j = n; j >= 1; j--) {
        printf ("%d ", a[j]);
    }

    return 0;
}