//(난이도 하) 거스름돈 주기 [30점]

#include <stdio.h>

int main(void)
{
    int money;

    scanf("%d", &money);

    printf("%d ", money / 500);
    money = money % 500;

    printf("%d ", money / 100);
    money = money % 100;

    printf("%d ", money / 50);
    money = money % 50;

    printf("%d", money / 10);

    return 0;
}
