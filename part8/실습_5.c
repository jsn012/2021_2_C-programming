/*
[설명]
소스8-7에sortArray()함수를 추가하고, main()함수를 수정하여 배열을 오름차순으로 정렬하여 출력하도록 프로그램을 작성하시오. sortArray()함수는 배열을 오름차순으로 정렬하는 함수이다.

[입력]
.

[출력]
score[] 배열에 저장된 각 원소(99, 84, 91, 78, 89)를 오름차순으로 정렬 후 출력
원소 뒤 공백 존재
*/

#include <stdio.h>

void printArray(int array[], int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d ", array[i]);
	}
}

void sortArray(int array[], int len) {
	int i, temp = 0;
	for (i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - (1 + i); j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

int main(void) {
	int score[] = { 99, 84, 91, 78, 89 };
	int array_length = sizeof(score) / sizeof(score[0]);
	sortArray(score, array_length);
	printArray(score, array_length);
	return 0;
}
