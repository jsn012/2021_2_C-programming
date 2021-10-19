/*
사용자로부터 알파벳을 제외한 문자를 입력받을 때 까지 문자를 입력받고,알파벳 외의 값이 입력되면 지금까지 입력한 알파벳들의 입력 횟수를 대ㆍ소문자 구분 없이 출력하는 프로그램을 작성하시오.
단.한번도 입력되지 않은 알파벳은 출력하지 않는다.

[입력]
임의의 알파벳 문자형 값을 입력받는다.
단. 알파벳 이외의 문자는 존재하지 않음.

[출력]
아래와 같이 입력받았던 알파벳들을 출력한다.

A : 1
G : 2
I : 1
M : 2
N : 1
O : 1
P : 1
R : 2
*/

#include <stdio.h>

int main()
{
	char chr[80];
	int cnt[26] = { 0 };
	int j = 0, i;

	while (1) {
		scanf("%c", &chr[j]);

		if ((chr[j] < 'A') || (chr[j] > 'Z' && chr[j] < 'a') || chr[j] > 'z') {
			break;
		}
		j++;
	}

	for (i = 0; i < j; i++) {
		if ((chr[i] >= 'A' && chr[i] <= 'Z') || (chr[i] >= 'a' && chr[i] <= 'z')) {
			if (chr[i] <= 'Z') {
				cnt[chr[i] - 'A']++;
			}
			else {
				cnt[chr[i] - 'a']++;
			}
		}
	}

	for (i = 0; i < 26; i++) {
		if (cnt[i]) {
			printf("%c : %d\n", 'A' + i, cnt[i]);
		}
	}

	return 0;
	}
