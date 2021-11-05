/*
[설명]
점수를 입력하면 점수를 바탕으로 학점을 판단하여 반환하는 함수를 작성하시오.

[입력]
0~100 사이의 정수 입력

[출력]
아래의 학점 판단에 따라 출력
100 ~ 90 : A
89 ~ 80 : B
79 ~ 70 : C
69 ~ 60 D
59 ~ 0 : F
*/

#include <stdio.h>
int score(int a) {
	if (a > 89) {
		return 'A';
	}
	else if (a > 79) {
		return 'B';
	}
	else if (a > 69) {
		return 'C';
	}
	else if (a > 59) {
		return 'D';
	}
	else {
		return 'F';
	}
}

int main() {
	int a;
	scanf("%d", &a);

	printf("%c", score(a));
	return 0;
}
