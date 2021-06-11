// 출석 번호를 n번 무작위로 불렀을 때, 가장 빠른 번호를 출력해 보자.

#include <stdio.h>

int main() {
    int n, tmp;
    int a[10000] = {};
    scanf ("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    for (int i = 0; i < n-1; i++) { // n-1 배열의 가장 마지막은 비교 할 수 없음
        for (int j = 0; j < n-1; j++) {
            if (a[j] > a[j+1]) { // 배열 안의 두 값을 바꾸는 코드
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    printf ("%d", a[0]);
    return 0;
}