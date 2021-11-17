/*
[설명]
길이가 80 미만인 임의의 문자열을 입력받아 역순으로 출력하는 프로그램을 작성하시오.

[입력]
길이가 80 미만인 임의의 문자열을 입력하세요.

[출력]
입력받은 문자열을 역순으로 출력하세요.
*/

#include<stdio.h>
#include<string.h>

int main(void) {
	char arr[80], arr1[80];

	gets(arr);

	int i = 0;
	while (arr[i] != '\0') {
		i++;
	}

	for (int j = 0; j < i; j++) {
		arr1[j] = arr[i - 1 - j];
	}
	arr1[i] = '\0';

	printf("%s", arr1);
}
