// 0이 아니면 입력된 정수를 출력하고, 0이 입력되면 출력을 중단해보자.

#include <stdio.h>

int main() {
    int n=1;

    while (n != 0) {
        scanf ("%d", &n);
        if (n != 0)
            printf ("%d\n", n);
    }
    return 0;
}