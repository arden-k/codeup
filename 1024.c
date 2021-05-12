#include <stdio.h>

int main() {
    char w[30]; // 문자열 마지막에 NULL
    scanf ("%s", &w);

    for (int i = 0; w[i] != '\0'; i++) {
        printf ("'%c'\n", w[i]);
    }
}