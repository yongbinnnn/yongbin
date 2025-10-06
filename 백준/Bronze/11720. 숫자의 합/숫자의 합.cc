#include <stdio.h>

int main(void)
{
    char num[101];
    int N;
    int sum = 0;
    scanf("%d %s", &N, num);
    for(int i = 0; i < N; i++)
    {
        sum += (num[i]-'0');
    }

    printf("%d", sum);
    return 0;
}