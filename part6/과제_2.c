/*
임의의 정수10개와 문자‘A’, ‘D’중 하나를 입력받아‘A’를 입력받은 경우 입력받은 정수들을 오름차순으로, ‘D’를 입력받은 경우 내림차순으로 정렬하는 프로그램을 작성하시오.

[입력]
정수형 값10개,문자형 값1개를 입력받아 저장한다.

[출력]
입력받은 값10개를 임의의 정렬 알고리즘을 사용하여 오름차순 또는 내림차순으로 정렬 후 출력한다.
*/

#include <stdio.h>

int main(void) {
	char txt;
	int i, j, num[10], min, max, tmp;

	for (i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		getchar();
	}
	while (1) {
		scanf("%c", &txt);

		if (txt == 'A' || txt == 'D') {
			break;
		}
		else {
			printf("A : 오름차순 정렬\nD : 내림차순 정렬\n");
		}
	}

	if (txt == 'A') {
		for (i = 0; i < 10; i++) {
			min = i;
			for (j = i + 1; j < 10; j++) {
				if (num[j] < num[min]) {
					min = j;
				}
			}
			tmp = num[i];
			num[i] = num[min];
			num[min] = tmp;
		}
	}

	if (txt == 'D') {
		for (i = 0; i < 10; i++) {
			max = i;
			for (j = i + 1; j < 10; j++) {
				if (num[j] > num[max]) {
					max = j;
				}
			}
			tmp = num[i];
			num[i] = num[max];
			num[max] = tmp;
		}
	}

	for (i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	}

	return 0;
}
