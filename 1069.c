// 평가를 문자(A, B, C, D, ...)로 입력받아 내용을 다르게 출력해보자.

#include <stdio.h>

int main() {
    char m;

    scanf ("%s", &m);

    if (m == 'A') {
        printf ("%s", "best!!!");
    }
    else if (m == 'B') {
        printf ("%s", "good!!");
    }
    else if (m == 'C') {
        printf ("%s", "run!");
    }
    else if (m == 'D') {
        printf ("%s", "slowly~");
    }
    else {
        printf ("%s", "what?");
    }
    return 0;
}