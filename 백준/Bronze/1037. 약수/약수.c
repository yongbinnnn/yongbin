#include <stdio.h>

int main(void)
{
    int num, N;
    int A[50];
    scanf("%d", &num);
    
    for(int i = 0; i < num; i++)
    {
        scanf("%d", &A[i]);
    }
    
    int min = A[0];
    int max = A[0];
    
    for(int i = 0; i < num; i++)
    {
        if(min > A[i])
        {
            min = A[i];
        }
        if(max < A[i])
        {
            max = A[i];
        }
    }
    
    printf("%d", min*max);
    
    return 0;
}