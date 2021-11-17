/*
[설명]
차원 배열의 행렬 두 개를 각각 동적 할당 방식을 사용하여 입력 받고,입력 받은 두 행렬의 곱(Matrix Multiplication)을 출력하는 프로그램을 작성하라.
정수 n을 입력 받고, n*n개의 정수를 입력 받아 동적으로 할당 받은 n*n 2차원 배열에 값을 저장한다.
프로그램 종료 시,할당한 메모리를 해제한다.

[입력]
사용자로부터 정수 하나를 입력 받는다 해당 값은 행렬의 열과 행의 값이며 즉 정방행렬이다.
사용자 입력 값이 2인 경우 첫 번째 행렬과 두 번째 행렬 모두 2x2의 행렬이며 따라서 각각 4개의 원소를 입력 받는다.

[출력]
사용자가 입력한 두 행렬의 곱을 계산 후 값을 출력한다.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int matrix;
	scanf("%d", &matrix);

	int** arr1 = NULL;
	arr1 = (int**)malloc(sizeof(int*) * matrix);
	for (int i = 0; i < matrix; i++) {
		arr1[i] = (int*)malloc(sizeof(int) * matrix);
	}

	int** arr2 = NULL;
	arr2 = (int**)malloc(sizeof(int*) * matrix);
	for (int i = 0; i < matrix; i++) {
		arr2[i] = (int*)malloc(sizeof(int) * matrix);
	}

	int** arr = NULL;
	arr = (int**)malloc(sizeof(int*) * matrix);
	for (int i = 0; i < matrix; i++) {
		arr[i] = (int*)malloc(sizeof(int) * matrix);
	}

	if (arr1 == NULL || arr2 == NULL || arr == NULL) {
		return -1;
	}

	for (int i = 0; i < matrix; i++) {
		for (int j = 0; j < matrix; j++) {
			scanf("%d", &arr1[i][j]);
		}
	}
	for (int i = 0; i < matrix; i++) {
		for (int j = 0; j < matrix; j++) {
			scanf("%d", &arr2[i][j]);
		}
	}

	int add = 0;
	for (int i = 0; i < matrix; i++) {
		for (int j = 0; j < matrix; j++) {
			for (int k = 0; k < matrix; k++) {
				add += arr1[i][k] * arr2[k][j];
			}
			arr[i][j] = add;
			add = 0;
		}
	}

	for (int i = 0; i < matrix; i++) {
		for (int j = 0; j < matrix; j++) {
			printf("%d ", arr[i][j]);
		}
		if (i == matrix - 1) {
			break;
		}
		printf("\n");
	}

	free(arr1);
	free(arr2);
	return 0;
}
