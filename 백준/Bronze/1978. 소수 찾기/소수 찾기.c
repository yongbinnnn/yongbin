#include <stdio.h>

int main(void)
{
    int N;
    int num, div;
    int count = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        for(int i = 2; i <= num; i++)
        {
            if(i == num)
            {
                count++;
                break;
            }
            else if(num%i == 0)
            {
                break;
            }
        }
    }
    printf("%d", count);
    return 0;
}