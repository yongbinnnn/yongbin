#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    
    for(int i = 0; i < a; i++)
    {
        for(int j = i; j < a-1; j++)
        {
            printf(" ");
        }
        for(int k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}