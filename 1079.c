// 'q'가 입력될 때가지 입력한 문자를 계속 출력하는 프로그램을 작성해보자.

#include <stdio.h>

int main() {
    char t;
    while (t != 'q'){
        scanf ("%c ", &t);
        printf ("%c\n", t);
    }
    return 0;
}