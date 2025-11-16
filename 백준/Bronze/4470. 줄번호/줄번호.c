#include <stdio.h>

int main(void)
{
    int N;
    char str[50];
    scanf("%d", &N);
    getchar();
    for(int i = 0; i < N; i++)
    {
        scanf("%[^\n]", str);
        getchar();
        printf("%d. %s\n", i+1, str);
    }
    return 0;
}