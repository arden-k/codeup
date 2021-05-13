#include <stdio.h>

int main() {
    double n;

    scanf ("%lf", &n); // double(long float) 형식으로 입력 받기
    printf ("%.11lf", n);

    return 0;
}