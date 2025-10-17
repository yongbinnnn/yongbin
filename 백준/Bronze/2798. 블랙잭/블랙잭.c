#include <stdio.h>

int main(void)
{
    int N, M, sum;
    int max = 0;
    int num[100];
    scanf("%d %d", &N, &M);
    
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < N-2; i++)
    {
        for(int j = i+1; j < N-1; j++)
        {
            for(int k = j+1; k < N; k++)
            {
                sum = num[i]+num[j]+num[k];
                if(sum >= max && M >= sum)
                {
                    max = sum;
                }
            }
        }
    }
    
    printf("%d", max);

    return 0;
}