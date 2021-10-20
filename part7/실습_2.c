/*
[출력]
배열 내 값 333, 444가 출력 예시와 같이 출력된다.

[예시 출력]
333
444
*/

#include <stdio.h>

int main(void) {
	int arr[5] = { 111,222,333,444,555 };
	int* aptr;
	aptr = &arr[2];
  
	printf("%d\n", *aptr);
	printf("%d\n", *(aptr+1));
  
	return 0;
}
