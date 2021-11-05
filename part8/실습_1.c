/*
표준 입력된 두 개의 정수를 큰 수를 기준으로 뺄셈을 수행하는 함수를 작성하여 아래의 코드를 완성하시오.

[입력]
2개의 정수 입력

[출력]
두 개의 정수 중, (큰 수) - (작은 수)의 결과 값을 출력하시오.
*/

#include <stdio.h>

int subtract(int a, int b) {
    if (a > b) {
        return a - b;
    }
    else {
        return b - a;
    }
}

int main(void) {
    int n1, n2;
    printf("Enter two integers : ");
    scanf("%d %d", &n1, &n2);
    printf("Subtraction result : %d\n", subtract(n1, n2));
    return 0;
}
