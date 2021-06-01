// 정수 1개가 입력되었을 때, 음(minus)/양(plus)과 짝(even)/홀(odd)을 출력해보자.

#include <stdio.h>

int main() {
    int n;
    scanf ("%d", &n);

    if (n < 0) {
        printf("%s", "minus");
        if (n % 2 == 0) {
            printf("\n%s", "even");
        }
        else {
            printf("\n%s", "odd");
        }
    }
    else {
        printf("%s", "plus");
        if (n % 2 == 0) {
            printf("\n%s", "even");
        }
        else {
            printf("\n%s", "odd");
        }
    }
    return 0;
}