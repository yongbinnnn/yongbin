#include <stdio.h>

int main(void)
{
    int N, num;
    int min;
    int max;
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        if(i == 0) min = num, max = num;
        if(num < min)
        {
            min = num;
        }
        else if(num > max)
        {
            max = num;
        }
    }
    printf("%d %d", min, max);
    return 0;
}