#include <stdio.h>

int main() {
    long long a, b, c, sum;
    float average;

    scanf ("%lld %lld %lld", &a, &b, &c);

    sum = a+b+c;
    average = (float)sum/(float)3;

    printf ("%lld\n", sum);
    printf ("%.1f", average);
    
    return 0;
}