/*
[설명]
strchr() 함수와 동일하게 동작하는 my_strchr() 함수를 구현하고,
my_strchr() 함수를 사용하여 입력받은 문자열에서 입력받은 문자를 모두 출력하는 프로그램을 작성하시오.

[입력]
임의의 문자열과 임의의 문자를 입력하세요.

[출력]
입력받은 문자열에서 입력받은 문자를 모두 출력하세요.
*/

#include <stdio.h>

int my_strchr(char* arr, char ch);

int main(void) {
    char arr[90], ch;
    
    gets(arr);
    scanf("%c", &ch);

    my_strchr(arr, ch);
    for (int i = 0; i < my_strchr(arr, ch); i++) {
        printf("%c ", ch);
    }

    return 0;
}

int my_strchr(char* arr, char ch) {
    int i = 0, num = 0;
    while (arr[i] != '\0') {
        if (arr[i] == ch) {
            num++;
        }
        i++;
    }
    return num;
}
