//(난이도 중) 소설책의 문자 개수 출력 (히스토그램) [50점]

#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[200];
    int inputLen = 0, asciiNum[128] = {0};

    gets(input);
    inputLen = strlen(input);

    for (int i = 0; i < inputLen; i++)
    {
        if (input[i - 1] == 32 && input[i] == 32)
        {
            break;
        }

        if (input[i - 2] == 101 && input[i - 1] == 110 && input[i] == 100)
        {
            asciiNum[69]--;
            asciiNum[78]--;
            break;
        }

        if (input[i] >= 'a' && input[i] <= 'z')
        {
            asciiNum[input[i] - 32]++;
        }
        else
        {
            asciiNum[input[i]]++;
        }
    }

    for (int i = 0; i < 128; i++)
    {
        if (asciiNum[i] == 0 || i == 32)
        {
            continue;
        }
        printf("%c(%d) : %d\n", i, i, asciiNum[i]);
    }

    return 0;
}
