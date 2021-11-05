/*
[설명]
소스8-7의printArray()함수를 수정하여printReverseArray()함수를 정의하여 실행하시오. printReverseArray()함수는 배열의 모든 원소를 역순으로 출력하는 함수이다.

[입력]
.

[출력]
score[] 배열에 저장된 각 원소(99, 84, 91, 78, 89)를 역순으로 출력
원소 뒤 공백 존재
*/

#include <stdio.h>
void printArray(int* ptr, int len) {
	int i;
	for (i = len-1; i >= 0; i--) {
		printf("%d ", ptr[i]);
	}
	printf("\n");
}
int main(void) {
	int score[] = { 99, 84, 91, 78, 89 };
	int array_length = sizeof(score) / sizeof(score[0]);
	printArray(score, array_length);
	return 0;
}
