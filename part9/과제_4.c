/*
[설명]
n개의 과목에 대한 학점을 동적 할당 방식을 사용하여 입력받고,평균 학점을 구하시오.

[입력]
사용자로부터 int형으로 과목 개수를 입력 받는다
과목 개수 만큼 int형으로 점수를 입력 받는다.

[출력]
과목의 평균 점수를 소수점 둘째짜리까지 출력한다,
출력 예시를 참고하시오.
*/

#include <stdio.h>

double avg(int num, int score[]) {
	double add = 0;
	for (int i = 0; i < num; i++) {
		add += score[i];
	}
	double avg = add / num;
	return avg;
}

int main(void) {
	int num;
	int* score = NULL;

	scanf("%d", &num);
	score = calloc(num, sizeof(int));
	if (score == NULL) {
		return -1;
	}
	for (int i = 0; i < num; i++) {
		scanf("%d", &score[i]);
	}

	printf("%.2f", avg(num, score));

	free(score);
	return 0;
}
