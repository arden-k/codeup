// 그림 파일 저장용량 계산하기

#include <stdio.h>

int main() {
    long long int w, h, b;
    double size;
    scanf ("%lld %lld %lld", &w, &h, &b);
    size = w * h * b;
    size = size / 8 / 1024 / 1024;
    printf ("%.2lf MB", size);

    return 0;
}