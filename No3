//1부터100까지 정수 중에서 소수(prime number)를 출력하는 코드를 작성하시오.

#include <stdio.h>

int main() {
	int a, b, div;

	for (a = 1; a < 101; a++) {
		for (b = 2; b < a; b++) {
			div = a % b;
			if (div == 0) {
				break;
			}
		}
		if (a == b) {
			printf("%d ", a);
		}
	}

	return 0;
}
