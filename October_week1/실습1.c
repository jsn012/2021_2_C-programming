/*
크기가20인 문자형 배열을 선언하고,문자20개 또는 마침표(.)를 입력받을 때까지 문자를 입력받아 입력받은 모든 문자를 출력하는 프로그램을 완성하시오.

[입력]
문자 최대 20개를 입력받음

[출력]
공백, 줄바꿈 없이 모든 문자 출력
*/

#include <stdio.h>

int main() {
	char str[21], k;
	int cnt;

	for (cnt = 0; cnt < 20; cnt++) {
		scanf("%c", &k);
		if (k == '.') {
			break;
		}
		str[cnt] = k;
		getchar();
	}

	for (int i = 0; i < cnt; i++) {
		printf("%c", str[i]);
	}

	return 0;
}
