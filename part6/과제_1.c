/*
윤성이는 시험 성적을 입력받아 평균을 구해주는 프로그램을 만들기로 하였다.배열을 사용하여 각 시험 점수를 입력받고,
해당 점수들의 총합,평균,최고점수,최저점수,합격 유무를 출력하는 프로그램을 작성하시오.

[입력]
정수형 값5개를 입력받아 배열에 저장한다.

[출력]
입력받은 정수들의 합,평균,최고점수,최저점수를 출력한다.
(단,평균은 소수점 둘째 자리까지 출력한다.)
입력받은 수 중0미만의 값이 존재하면, “잘못된 입력입니다.”라는 문구를 출력하고 다시 입력 받는다.
점수들의 총합이350점 미만이면“불합격”, 350점 이상이면“합격”을 출력한다
*/

#include <stdio.h>

int main() {
	int score[5];
	int i, j, k, min, tmp;

	for (i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
		if (score[i] < 0) {
			printf("잘못된 입력입니다.\n");
			scanf("%d", &score[i]);
		}
		getchar();
	}

	for (i = 0; i < 5; i++) {
		min = i;
		for (j = i + 1; j < 5; j++) {
			if (score[j] < score[min])
				min = j;
		}
		tmp = score[i];
		score[i] = score[min];
		score[min] = tmp;
	}

	int total = 0;
	for (i = 0; i < 5; i++) {
		total = score[i] + total;
	}

	double mean = total / 5.0;

	printf("total = %d\n", total);
	printf("mean = %.2lf\n", mean);
	printf("max = %d\n", score[4]);
	printf("min = %d\n", score[0]);
	
	if (total < 350) {
		printf("불합격입니다.\n");
	}
	else {
		printf("합격입니다.\n");
	}

	return 0;
}
