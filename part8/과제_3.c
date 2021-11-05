/*
[설명]
임의의 양의 정수n을 입력 받아n의 약수의 개수를 출력하는 프로그램을 함수를 이용하여 작성하시오.

[입력]
양의 정수 입력

[출력]
입력받은 값의 약수의 개수 출력
*/

#include <stdio.h>
int measure(int a) {
	int num = 0;
	for (int i = 1; i < a+1; i++) {
		if (a % i == 0) {
			num++;
		}
	}
	return num;
}

int main() {
	int a;
	scanf("%d", &a);

	printf("%d", measure(a));
	return 0;
}
