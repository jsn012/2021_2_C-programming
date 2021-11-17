/*
[설명]
임의의 수를 입력 받아 그 수 만큼의 int형 데이터를 저장할 수 있는 동적 메모리를 할당한다.
1번에서 사용자가 입력한 수의 크기만큼 숫자를 입력 받는다.
사용자의 선택에 의해 오름차순 또는 내림차순으로 정렬하는 프로그램을 작성하시오.
입출력 예시를 참고하여 작성하시오

[입력]
# 입력 설명에서 보인 "입력안내문구"는 프로그램 작성시에는 사용하면 안됩니다.
# 여기에서는 이해를 돕기 위해 사용한 것입니다.
# 첫번째줄에서 입력한 것은 배열의 크기이고, 두번째줄에서 입력한 것은 배열의 크기만큼, 배열의 원소값을 입력한 것이고,
# 세번째줄에서 입력한 값은 오름차순으로 정렬할 것인지, 내림차순으로 정렬할 것인지를 숫자 1이나 2로 입력 받는 것입니다.

10
8 3 2 9 4 5 1 10 7 6
1
Input size >>10
Input 10 numbers >>8 3 2 9 4 5 1 10 7 6
Ascending(1) or Descending(2) >>1
10
18467 6334 26500 19169 15724 11478 29358 26962 24464 5705
2
Input size >>10
Input 10 numbers >>18467 6334 26500 19169 15724 11478 29358 26962 24464 5705
Ascending(1) or Descending(2) >>2

[출력]
출력 예를 참고하시오
*/

#include <stdio.h>
void sortArrayUp(int arr[], int size) {
	int i, temp = 0;
	for (i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - (1 + i); j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void sortArrayDown(int arr[], int size) {
	int i, temp = 0;
	for (i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - (1 + i); j++) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

int main(void) {
	int size, a, i;
	int* arr = NULL;

	scanf("%d", &size);
	arr = calloc(size, sizeof(int));
	if (arr == NULL) {
		return -1;
	}

	for (i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	scanf("%d", &a);

	if (a == 1) {
		sortArrayUp(arr, size);
		printArray(arr, size);
	}
	else if (a == 2) {
		sortArrayDown(arr, size);
		printArray(arr, size);
	}

	return 0;
}
