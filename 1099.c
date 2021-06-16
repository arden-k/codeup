// 미로 상자의 구조가 0(갈 수 있는 곳), 1(벽 또는 장애물)로 주어지고,
// 먹이가 2로 주어질 때, 성실한 개미의 이동 경로를 예상해보자.

#include <stdio.h>

int main()
{   
    int maze[11][11] = {}; // 배열 [세로][가로]
    int x, y;

    for (y = 1; y <= 10; y++)
    {
        for (int x = 1; x <= 10; x++)
        {
            scanf("%d", &maze[y][x]);
        }
    }

    x = y = 2; // 2.2 좌표 부터 시작

    while (1)
    {
        if (maze[y][x] == 2)
        {
            maze[y][x] = 9;
            break; // 다음 칸
        }

        maze[y][x] = 9;

        if (maze[y][x + 1] == 0 || maze[y][x + 1] == 2) // 벽이 아니라면
        {
            x++;
        }
        else if (maze[y][x + 1] == 1) // 벽이라면
        {
            if (maze[y + 1][x] == 0 || maze[y + 1][x] == 2) // 벽이 아니라면
            {
                y++;
            }
            else
            {
                break;
            }
        }
    }

    for (y = 1; y <= 10; y++)
    {
        for (x = 1; x <= 10; x++)
        {
            printf("%d ", maze[y][x]);
        }
        printf ("\n");
    }

    return 0;
}