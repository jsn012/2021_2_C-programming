/*
아래의 식을 참고로 섭씨 온도(C)를 화씨 온도(F)로 변환하는 프로그램을 작성하시오.

F = (9.0 / 5.0) * C + 32
섭씨온도가–10부터100까지10씩 증가,이 때의 화씨온도를 구하여 출력하는데,온도는 모두 정수형태로 출력
*/

#include <stdio.h>

int main() {
	int celsius, fahrenheit;

	for (celsius = -10; celsius < 101; celsius++) {
		if (celsius % 10 == 0) {
			fahrenheit = (9.0 / 5.0) * celsius + 32;
			printf("%d\n", fahrenheit);
		}
	}

	return 0;
}
