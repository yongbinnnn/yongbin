#include <stdio.h>

int main(void)
{
    int level;
    int a, b;
    scanf("%d", &level);
    
    for(int i = 0; i < level; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
    
    return 0;
}