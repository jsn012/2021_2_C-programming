/*
[설명]
Clipboard Image.png
위그림에서 보는 바와 같이malloc()함수의 인자로int의 사이즈에3을 곱하여int형 저장공간3개를 연속적으로 할당 받아 포인터 변수arr이 시작 주소를 가리키는 예시이다.
아래 템플릿에 정의된 코드를 응용하여 출력 예와 동일하게 동작하게 한다.

[입력]
없음

[출력]
배열에 저장된 값을 출력한다.
*/

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int* arr = NULL;
	arr = malloc(sizeof(int)*3);
	if (arr == NULL) {
		return -1;
	}
	*arr = 100;
	*(arr+1) = 101;
	*(arr+2) = 102;
	for (int i = 0; i < 3; i++) {
		printf("Value : %d\n", *(arr+i));
	}
	free(arr);
	return 0;
}
