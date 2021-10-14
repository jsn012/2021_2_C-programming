/*
아래 행렬2개를 사용하여 행렬 곱셈을 수행하시오.

9 2 7
4 5 6

2 13
5 10
2 11

[예시 출력]
42 214
45 168
*/

#include <stdio.h>

int main(void) {
	int mat1[2][3] = { { 9,2,7 }, { 4,5,6 } };	//2x3 행렬
	int mat2[3][2] = { { 2,13 }, { 5,10 }, { 2,11 } };	//3x2 행렬
	int matPlus = 0;
	int matT[2][2];

	int i, j, k;

	for (i = 1; i > -1; i--) {
		for (j = 0; j < 2; j++) {
			for (k = 0; k < 3; k++) {
				matPlus = (mat1[j][k] * mat2[k][i]) + matPlus;
			}
			matT[j][i] = matPlus;
			matPlus = 0;
		}
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d", matT[i][j]);
			(j == 0) ? printf(" ") : printf("\n");
		}
	}

	return 0;
}
