/*
학생3명에 대한3과목의 점수를 입력받아 각 학생별 입력받은 점수의 합계와 평균을 계산하여 출력하되
총점이240점 미만이면“Fail”을240점 이상이면“Pass”를 출력하는 프로그램을 작성하시오.
단,평균은 소수점 첫째 자리까지 출력한다.

[입력]
학생 3명의 점수를 입력받는다.

ex)
95 100 92
97 95 96
77 82 80

[출력]
총점, 평균, 통과 결과를 출력한다.

ex)
Student 1 : total 287, avg 95.7, Pass
Student 2 : total 288, avg 96.0, Pass
Student 3 : total 239, avg 79.7, Fail
*/

#include <stdio.h>

int main() {
	int score[3][3];
	int i, j, total[3] = { 0 };
	double avg;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &score[i][j]);
		}
		getchar();
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			total[i] = score[i][j] + total[i];
		}
	}

	for (i = 0; i < 3; i++) {
		avg = total[i] / 3.0;
		if (total[i] < 240) {
			printf("Student %d : total %d, avg %.1lf, Fail\n", i + 1, total[i], avg);
		}
		else {
			printf("Student %d : total %d, avg %.1lf, Pass\n", i + 1, total[i], avg);
		}
	}

	return 0;
}
