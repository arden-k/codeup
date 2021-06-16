// 바둑판(19 * 19)에 n개의 흰 돌을 놓는다고 할 때
// n개의 흰 돌이 놓인 위치를 출력하는 프로그램을 작성해보자.

#include <stdio.h>

int main() {
    int n, x, y;
    int arr[20][20] = {};
    scanf ("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf ("%d %d", &x, &y);
        arr[x][y] = 1;
    }
    for (int i = 1; i < 20; i++) {
        for (int j = 1; j < 20; j++) {
            printf ("%d ", arr[i][j]);
        }
        printf ("\n");
    }
    return 0;
}