// 점수(정수, 0~100)를 입력받아 평가를 출력해보자.

#include <stdio.h>

int main() {
    int n;

    scanf ("%d", &n);

    if (n >= 90) {
        printf ("%s", "A");
    }
    else if (n >= 70) {
        printf ("%s", "B");
    }
    else if (n >= 40) {
        printf ("%s", "C");
    }
    else {
        printf ("%s", "D");
    }
    return 0;
}