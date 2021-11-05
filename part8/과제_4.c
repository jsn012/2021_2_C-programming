/*
[설명]
초(second)를 입력 받아 시간,분,초 단위로 나눠서 출력하는 함수를 구현해 프로그램을 작성하시오.

[입력]
초(second)입력

[출력]
입력받은초(second)를 시간, 분, 초 단위로 나눠 출력
각 단위 뒤에 공백 존재
*/

#include <stdio.h>
int time(int sec) {
	int min, hour;

	min = sec / 60;
	hour = min / 60;
	sec = sec % 60;
	min = min % 60;

	if (hour > 0) {
		printf("%d시간 ", hour);
	}
	if (min > 0) {
		printf("%d분 ", min);
	}
	if (sec > 0) {
		printf("%d초 ", sec);
	}

	return 0;
}

int main() {
	int a;
	scanf("%d", &a);

	time(a);
	return 0;
}
