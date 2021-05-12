#include <stdio.h>

int main() {
    char word[2001]; // 크기 2000 문자

    fgets(word, 2000, stdin); // 2000크기의 stdin(표준 입력 파일에 대한 파일 포인터)로 읽은 데이터를 word에 저장해
    printf("%s", word);
}