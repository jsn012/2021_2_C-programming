
/*
사용자로부터a부터z사이의 문자를 임의대로 입력받아 배열에 저장하고,오름차순으로 정렬하여 출력하는 프로그램을 작성하시오.
입력받는 문자의 최대 수는100개이며,알파벳 소문자가 아닌 문자가 입력되면 입력을 중단하고,입력받은 문자들만 정렬하여 출력한다.

[입력]
a 부터 z까지 소문자가 아닌 문자를 입력 받을때 까지 입력 받음.

[출력]
입력받은 소문자를 정렬하여 출력
*/

#include <stdio.h>

int main() {
	char arr[100], tmp;
	int i, k, j, min;

	for (k = 0; k < 100; k++) {
		scanf("%c", &arr[k]);
		getchar();
		if (arr[k] < 'a' || arr[k] > 'z') {
			break;
		}
	}
	for (i = 0; i < k; i++) {
		min = i;
		for (j = i + 1; j < k; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		tmp = arr[i];
		arr[i] = arr[min];
		arr[min] = tmp;
	}
	for (i = 0; i < k; i++) {
		printf("%c\n", arr[i]);
	}

	return 0;
}
