#include <stdio.h>

int main(void)
{
    int N;
    float sum = 0;
    int max = 0;
    int score[1000];
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++) 
    {
        scanf("%d", &score[i]);
    }
    for(int i = 0; i < N; i++)
    {
        if(max < score[i])
        {
            max = score[i];
        }
    }
    
    for(int i = 0; i < N; i++)
    {
        sum += (float)score[i]/max*100;
    }
    
    printf("%.2f",(float)sum/N);
    
    return 0;
}