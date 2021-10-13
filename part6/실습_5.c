/*
아래의 3행 3열의 행렬 3개의 합을 구하는 프로그램을 작성하시오

       123	   100         147
mat1 = 456, mat2 = 010, mat3 = 258
       789	   001         369
       
[입력]
없음.

[출력]
행렬의 합 출력
*/

#include <stdio.h>

int main() {
	int mat1[3][3], mat2[3][3], mat3[3][3], i, j, k, plus[3][3];
	int a = 1, b = 1, c = 1;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			mat1[i][j] = a;
			a++;
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (i == j) {
				mat2[i][j] = 1;
			}
			else {
				mat2[i][j] = 0;
			}
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			mat3[j][i] = b;
			b++;
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			plus[i][j] = mat1[i][j] + mat2[i][j] + mat3[i][j];
			if (j == 2) {
				printf("%2d", plus[i][j]);
			}
			else {
				printf("%2d ", plus[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}
