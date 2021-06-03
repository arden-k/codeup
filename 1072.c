// 정수 입력받아 계속 출력하기

#include <stdio.h>

int main() {
    int n, m;
    scanf ("%d", &n);
    
    reget:
        scanf("%d", &m);
        if(n-- != 0) { // n-1 씩 계산해서 0이 아니라면
            printf("%d\n", m);
            goto reget;
        }

    return 0;
}