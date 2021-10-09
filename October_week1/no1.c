//출력 예 및 힌트를 참고하여 2단부터 9단까지 가로 형태의 구구단 표를 출력하시오.

#include <stdio.h>

int main() {
	int a, b, c;

	for (a = 1; a < 10; a++) {  //a번째
		for (b = 2; b < 10; b++) {  //b단
			c = b * a;
			if (c < 10) {
				printf("%d x %d = %d\t", b, a, c);  //b x a = c
			}
			else {
				printf("%d x %d = %d\t", b, a, c);
			}
		}
		printf("\n");
	}

	return 0;
}
