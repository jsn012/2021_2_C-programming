/*
반복문을 이용하여 입출력 예와 같이 동작하는 프로그램을 작성하시오.

[입력]
int형 정수 하나를 입력받는다.
*/

#include <stdio.h>
void main()
{
    int a;
    int i, j, k;

    scanf("%d", &a);

    for (i = 0; i < a; i++) {
        for (k = 1; k < a - i; k++) {
            printf(" ");
        }
        for (j = 0; j < i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}
