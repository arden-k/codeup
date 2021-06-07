// A, B, C, D, E, F 중 하나가 입력될 때, 1부터 F까지 곱한 16진수 구구단의 내용을 출력해보자.
// (단, A~F까지만 입력된다.)

#include <stdio.h>

int main() {
    int t;
    scanf ("%X", &t);
    
    for (int i = 1; i < 16; i++) {
        printf("%X*%X=%X\n", t, i, t*i);
    }
    return 0;
}