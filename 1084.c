// 주어지 rgb 빛들을 다르게 섞어 만들 수 있는 모든 경우의 조합(r g b)과 총 가짓 수를 계산해보자.

#include <stdio.h>

int main() {
    int r, g, b, count=0;
    scanf("%d %d %d", &r, &g, &b);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < g; j++) {
            for (int k = 0; k < b; k++) {
                printf ("%d %d %d\n", i, j, k);
                count++;
            }
        }
    }
    printf ("%d", count);
    return 0;
}