/*
[설명]
문자열을 입력받아 출력하도록 calloc()함수를 사용하여 작성하라.

[입력]
사용자로부터 입력할 문자열의 개수를 정수형으로 입력받는다.
사용자가 입력한 정수의 수만큼 문자열을 입력 받는다.

[출력]
사용자가 입력한 문자열을 출력한다.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	char* arr = NULL;

	scanf("%d", &num);
	arr = (char*)calloc(num+1, sizeof(char));
	if (arr == NULL) {
		return -1;
	}

	for (int i = 0; i < num+1; i++) {
		scanf("%c", &arr[i]);
	}

	for (int i = 1; i < num+1; i++) {
		printf("%c", arr[i]);
	}

	free(arr);
	return 0;
}
