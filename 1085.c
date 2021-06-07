// 소리 파일 저장용량 계산하기

#include <stdio.h>

int main() {
    long long int h, b, c, s; // 가장 큰 정수형
    double mb;
    scanf ("%lld %lld %lld %lld", &h, &b, &c, &s);
    mb = h * b * c * s;
    mb = mb / 8 / 1024 / 1024; // MB 값으로 변환
    printf ("%.1lf MB", mb);

    return 0;
}