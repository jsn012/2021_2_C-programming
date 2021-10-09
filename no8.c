/*
반복문을 이용하여 입출력 예와 같이 동작하는 프로그램을 작성하시오.

[입력]
int형 정수 하나를 입력받는다.
*/

#include <stdio.h>
void main()
{
    int num;
    int i, k;

    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        for (k = num - 1; k > i; k--) {
            printf(" ");
        }
        for (k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = 1; i < num; i++) {
        for (k = 0; k < i; k++) {
            printf(" ");
        }
        for (k = 2 * num - 1; k > 2 * i; k--) {
            printf("*");
        }
        printf("\n");
    }
}
