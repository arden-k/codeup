// 세 정수 a, b, c가 입력되었을 때, 짝(even)/홀(odd)을 출력해보자.

#include <stdio.h>

int main() {
    int a, b, c;

    scanf ("%d %d %d", &a, &b, &c);

    if (a % 2 == 0) {
        printf ("%s", "even\n");
    }
    else {
        printf ("%s", "odd\n");
    }

    if (b % 2 == 0) printf ("%s", "even\n");
    else printf ("%s", "odd\n");

    if (c % 2 == 0) printf ("%s", "even\n");
    else printf ("%s", "odd");

    return 0;
}