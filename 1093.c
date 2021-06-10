// 출석 번호를 n번 무작위로 불렀을 때, 각 번호(1~23)가 불린 횟수를 각각 출력해보자.

#include <stdio.h>

int main() {
    int n, t;
    int a[24]={};
    scanf ("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &t);
        a[t] = a[t]+1;
    }
    for (int i = 1; i <= 23; i++) {
        printf ("%d ", a[i]);
    }
    return 0;
}