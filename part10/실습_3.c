/*
[설명]
길이가 80 이하인 임의의 문자열을 입력받고, 해당 문자열에 사용된 알파벳 개수를 출력하는 프로그램을 작성하시오. 단, 포함되지 않는 알파벳은 출력하지 않으며, 대/소문자 구분 또한 하지 않는다.

[입력]
길이가 80 이하인 임의의 문자열을 입력하세요.

[출력]
문자열에 사용된 알파벳 개수를 출력하세요.
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char arr[80];
    int cnt[26] = { 0 };
    gets(arr);

    int len = strlen(arr);
    for (int i = 0; i < len; i++) {
        if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z')) {
            if (arr[i] <= 'Z') {
                cnt[arr[i] - 'A']++;
            }
            else {
                cnt[arr[i] - 'a']++;
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        if (cnt[i] != 0) {
            printf("%c : %d\n", 'A' + i, cnt[i]);
        }
    }

    return 0;
}
