#include <stdio.h>

int main(void)
{
    int N, v;
    int a = 0;
    int num[101];  
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }
    
    scanf("%d", &v);
    for(int i = 0; i < N; i++)
    {
        if(num[i] == v)
        {
            a += 1;
        }
    }
    
    printf("%d", a);
    
    return 0;
}