#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    
    for(int i = 0; i < num; i++)
    {
        for(int k = 0; k < i; k++)
        {
            printf(" ");
        }
        for(int j = 0; j < 2*(num-i)-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}