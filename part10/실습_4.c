/*
[설명]
길이가 30 이하인 문자열 3개를 입력받고, 각 문자열을 하나로 합친 뒤 합친 문자열의 길이와 결과를 출력하는 프로그램을 작성하시오.

[입력]
길이가 30 이하인 문자열 3개를 입력하세요.

[출력]
입력받은 세 문자열을 하나로 합친 후, 합친 문자열의 길이와 결과를 출력하세요.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char arr1[90], arr2[30], arr3[30];

    gets(arr1);
    gets(arr2);
    gets(arr3);

    strcat(arr1, arr2);
    strcat(arr1, arr3);

    printf("Merged string length : %d\n", strlen(arr1));
    printf("Merged string : %s\n", arr1);

    return 0;
}
