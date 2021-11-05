/*
[설명]
표준입력으로 양의 정수 값을 입력받아1에서 입력한 정수까지의 소수를 구하는 함수를 작성하고,그 함수를 호출하여 동작을 확인하는 프로그램을 작성하시오.

[입력]
양의 정수 값 입력

[출력]
1에서 입력한 정수까지의 소수를 모두 출력
소수 뒤에는 공백 존재
*/

#include <stdio.h>
int decimal(int b) {
	int i, j;
	for (i = 2;i < b+1; i++) {
		for (j = 2; j < i + 1; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) {
			printf("%d ", i);
		}
	}

	return 0;
}

int main(void) {
	int a;
	scanf("%d", &a);
	decimal(a);

	return 0;
}
