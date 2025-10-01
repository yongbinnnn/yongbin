#include <stdio.h>

int main(void)
{
    int level;
    int sum;
    while(1)
    {
        sum = 0;
        scanf("%d", &level);
        if(level == 0)
        {
            break;
        }
        for(int i = level; i >= 1; i--)
        {
            sum += i;
        }
        printf("%d\n", sum);
    }
    return 0;
}