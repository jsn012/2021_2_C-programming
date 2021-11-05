/*
[설명]
임의의 양의 정수n을 입력하면1부터n까지의 합을 구하는 프로그램을 재귀함수를 이용하여 구현하시오.

[입력]
양의 정수 입력

[출력]
재귀함수를 이용하여 구한 1부터 n까지의 합 출력
*/

#include <stdio.h>
int add(int a) {
	if (a == 1) {
		return 1;
	}
	else {
		return (a + add(a - 1));
	}
}

int main() {
	int a;
	scanf("%d", &a);
	printf("%d", add(a));
	return 0;
}
