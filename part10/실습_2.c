/*
[설명]
문자열을 인자로 받아 문자열을 역순으로 변환하여 반환하는reverseString() 함수를 만들고, 동작을 테스트하기 위한 프로그램을 작성하시오.

[입력]
임의의 문자열을 입력하세요.

[출력]
입력받은 문자열을 역순으로 출력하세요.
*/

#include <stdio.h>
#include <string.h>

void reverseString(char* s);

int main(void) {
    char arr[80];

    gets(arr);
    reverseString(arr);

    printf("%s", arr);

    return 0;
}

void reverseString(char* arr) {
    size_t size = strlen(arr);
    char temp;

    for (size_t i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[(size - 1) - i];
        arr[(size - 1) - i] = temp;
    }
}
