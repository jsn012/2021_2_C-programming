/*
[설명]
표준입력으로 3개의 정수를 입력받을 때, 3개의 정수 중 가장 작은 정수의 값을 반환하는함수를 작성하시오.

[입력]
3개의 정수 입력

[출력]
가장 작은 정수 값 출력
*/

#include <stdio.h>
int min(int a, int b, int c) {
	if (a > b) {
		if (b > c) {
			return c;
		}
		else {
			return b;
		}
	}
	else {
		if (a > c) {
			return c;
		}
		else {
			return a;
		}
	}
}

int main() {
	int n1, n2, n3;
	printf("Enter three integers : ");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("Smallest value : %d\n", min(n1, n2, n3));
	return 0;
}
