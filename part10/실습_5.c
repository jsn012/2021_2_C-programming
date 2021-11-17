/*
[설명]
strlen() 함수와 동일하게 동작하는 my_strlen() 함수를 구현하고,
my_strlen() 함수를 사용하여 입력받은 문자열의 길이를 출력하는 프로그램을 작성하시오.

[입력]
임의의 문자열을 입력하세요.

[출력]
입력받은 문자열의 길이를 출력하세요.
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char arr[90];
    gets(arr);

    printf("Length : %d", my_strlen(arr));

    return 0;
}

int my_strlen(char* arr) {
    int i = 0;
    while (arr[i] != '\0') {
        i++;
    }
    return i;
}
