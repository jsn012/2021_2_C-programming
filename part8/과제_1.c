/*
[설명]
두 정수를 입력 받아 두 정수의+,  -,  *의 결과를 반환하는 함수3개를 만들어 결과를 출력하는 프로그램을 작성하시오.
두 정수를 비교하여(큰 수) - (작은 수) 로연산 하시오.

[입력]
두 정수 입력

[출력]
입력받은 두 정수의 +, -, * 연산값 출력
*/

#include <stdio.h>
int subtract(int a, int b) {
	if (a > b) {
		return a + b;
	}
	else {
		return b + a;
	}
}

int add(int a, int b) {
	if (a > b) {
		return a - b;
	}
	else {
		return b - a;
	}
}

int mulply(int a, int b) {
	return a * b;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	printf("%d %d %d", subtract(a, b), add(a, b), mulply(a, b));

	return 0;
}
