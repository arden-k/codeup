// 바둑판(19 * 19)에 흰 돌(1) 또는 검정 돌(0)이 모두 꽉 채워져 놓여있을 때,
// n개의 좌표를 입력받아 십(+)자 뒤집기한 결과를 출력하는 프로그램을 작성해보자.

#include <stdio.h>

int main() {
    int n, x, y;
    int arr[20][20] = {};
    
    for(int i = 1; i < 20; i++) {
        for(int j = 1; j < 20; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    scanf ("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        for(int j = 1; j < 20; j++) {
            if(arr[x][j]==0) {
                arr[x][j]=1;
            }
            else {
                arr[x][j] = 0;
            }
        }
        for(int j = 1; j < 20; j++) {
            if(arr[j][y]==0) {
                arr[j][y]=1;
            }
            else {
                arr[j][y] = 0;
            }
        }
    }

    for (int i = 1; i < 20; i++) {
        for (int j = 1; j < 20; j++) {
            printf ("%d ", arr[i][j]);
        }
        printf ("\n");
    }
    return 0;
}