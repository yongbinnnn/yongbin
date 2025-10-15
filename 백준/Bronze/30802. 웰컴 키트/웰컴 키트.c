#include <stdio.h>

int main(void)
{
    int N, T, P;
    int count = 0;
    int size[6];
    scanf("%d", &N);
    for(int i = 0; i < 6; i++)
    {
        scanf("%d", &size[i]);
    }
    scanf("%d %d", &T, &P);
    for(int i = 0; i < 6; i++)
    {
        if(size[i]%T == 0) 
        {
            count += size[i]/T;
        }
        else
        {
            count += size[i]/T;
            count++;
        }
    }
    printf("%d\n", count);
    printf("%d %d\n", N/P, N%P);
    return 0;
}