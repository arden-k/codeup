// 0 입력될 때까지 무한 출력하기1

#include <stdio.h>

int main() {
    int n;

    reload:
        scanf("%d", &n);
        if (n != 0) {
            printf("%d\n", n);
            goto reload;
        }

    return 0;
}