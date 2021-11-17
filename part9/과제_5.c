/*
[설명]
행과 열에 해당하는n과m을 입력받는다. n x m크기 행렬의 원소를 정수형으로 입력받는다.
행렬 원소들의 평균을 구해,평균보다 크거나 같은 원소는 그대로 출력하고,평균보다 작은 원소는0으로 출력한다.
메모리를 동적으로 할당받아 행렬을 저장하고,프로그램 종료 시 할당된 메모리는 반드시 해제한다.
평균은 정수 연산으로 계산한다.정수형 합/정수형 행렬의 크기

[입력]
사용자로부터 행과 열을 int형으로 입력 받는다
사용자가 입력한 행과 열을 곱한만큼 값을 입력받는다.

[출력]
행렬 원소들의 평균을 구해,평균보다 크거나 같은 원소는 그대로 출력하고,평균보다 작은 원소는0으로 출력한다.
입출력 예시와 동일하게 동작하게 한다.
*/

#include <stdio.h>

int main(void) {
	int width, height, add = 0, i, j;
	scanf("%d %d", &width, &height);
	
	int** arr = NULL;
	arr = calloc(height, sizeof(int*));
	for (int i = 0; i < height; i++) {
		arr[i] = calloc(width, sizeof(int));
	}
	if (arr == NULL) {
		return -1;
	}

	for (i = 0; i < height; i++) {
		for (j = 0; j < width; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < height; i++) {
		for (j = 0; j < width; j++) {
			add += arr[i][j];
		}
	}
  
	printf("\n");
	for (i = 0; i < height; i++) {
		for (j = 0; j < width; j++) {
			if (arr[i][j] >= add / (width * height)) {
				printf("%d ", arr[i][j]);
			}
			else {
				printf("%d ", 0);
			}
		}
		printf("\n");
	}
	
	free(arr);
	return 0;
}
