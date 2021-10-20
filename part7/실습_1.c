/*
포인터를 사용해 입력한 정수값을 교환하는 프로그램을 만들어라.
정수형의 두 변수a, b를 선언하여 이용한다.
두 변수의 값을 교환하기 위해서 임시변수tmp를 선언하여 사용한다.
또한 값을 교환할 때 정수형 변수가 아닌, 별도로 선언한 포인터 변수를 사용한다.

[입력]
임의의 정수형 값 2개를 입력받는다.

[출력]
입력받은 정수형 값 2개를 순서를 바꾸어서 출력한다.
*/

#include <stdio.h>

int main() {
	int a, b, tmp;
	int* ptra = &a;
	int* ptrb = &b;

	scanf("%d %d", &a, &b);

	tmp = *ptra;
	*ptra = *ptrb;
	*ptrb = tmp;

	printf("%d %d\n", a, b);
	return 0;
}
