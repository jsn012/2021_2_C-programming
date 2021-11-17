/*
[설명]
피보나치 수를 출력하는 문제이다.
피보나치 수는 1로 시작하여 이전n-2와n-1의 값을 더하는 방식을 의미한다.
사용자로부터 정수 하나를 입력 받아 피보나치 수를 출력하시오

[입력]
사용자로부터 int형 정수 하나를 입력 받는다

[출력]
입력 값이 5인 경우
1 1 2 3 5를 출력한다.
입력 값이 6인 경우
1 1 2 3 5 8을 출력한다.
출력은 n번째 항의 값은 n-2 + n-1번째 항의 합이다.
출력 예시를 참고하여 작성한다.
*/

#include <stdio.h>
void fibo(int a) {
	int i, t1 = 1, t2 = 1, nextTerm;
	for (i = 0; i < a; ++i) {
		printf("%d ", t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	return 0;
}

int main(void) {
	int a;
	scanf("%d", &a);
	fibo(a);
	return 0;
}
