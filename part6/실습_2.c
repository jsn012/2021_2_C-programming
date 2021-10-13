/*
크기가10인int형 배열을 선언하고 사용자로부터 임의의 정수10개를 입력받아 저장한 뒤,배열에 각 원소의 값이 짝수이면“Even”을 출력하고 홀수인 경우“Odd”를 출력하는 프로그램을 작성하시오.

[입력]
자연수 10개 입력

[출력]
입력된 자연수의 짝수, 홀수 결과 출력
짝수 : Even
홀수 : Odd
*/

#include <stdio.h>

int main() {
	int a[10];

	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	for (int j = 0; j < 10; j++) {
		if (a[j] % 2 == 0) {
			printf("Even\n");
		}
		else {
			printf("Odd\n");
		}
	}

	return 0;
}
