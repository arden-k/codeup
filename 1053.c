// 1 또는 0이 입력되었을 때 반대로 출력하는 프로그램을 작성해보다.

#include <stdio.h>

int main() {
    int n;

    scanf ("%d", &n);
    printf ("%d", !n); // NOT 연산자 사용
    
    return 0;
}