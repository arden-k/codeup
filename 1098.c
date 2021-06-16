/* 격자판의 세로(h), 가로(w), 막대의 개수(n), 각 막대의 길이(l),
막대를 놓는 방향(d:가로는 0, 세로는 1)과
막대를 놓는 막대의 가장 왼쪽 또는 위쪽의 위치(x, y)가 주어질 때
격자 판을 채운 막대의 모양을 출력하는 프로그램을 만들어보자. */

#include <stdio.h>

int main()
{
    int h, w, n, l, d, x, y;
    int arr[100][100] = {};
    scanf("%d %d", &h, &w);
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d %d %d", &l, &d, &x, &y);
        if (d == 0)
        {
            for (int j = 0; j < l; j++)
            {
                arr[x][y+j] = 1;
            }
        }
        else
        {
            for (int j = 0; j < l; j++)
            {
                arr[x+j][y] = 1;
            }
        }
    }

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}