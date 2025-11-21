#include <stdio.h>

int main(void)
{
    int m, x, y;
    int ball = 1;
    scanf("%d", &m);
    
    for(int i = 0; i < m; i++)
    {
        scanf("%d %d", &x, &y);
        if(x == ball) ball = y;
        else if(y == ball) ball = x;
    }
    
    printf("%d", ball);
    
    return 0;
}
