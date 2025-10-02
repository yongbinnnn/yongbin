#include <stdio.h>

int main(void)
{
    int A;
    int sum = 0;
    
    for(int i = 0; i < 5; i++)
    {    
        scanf("%d", &A);
        sum += A;
    }
    printf("%d", sum);
    
    return 0;
}