#include <stdio.h>

int main(void)
{
    int a;
    int max = 0;
    int idx;
    
    for(int i = 1; i < 10; i++)
    {
        scanf("%d", &a);
        if(max < a)
        {
            max = a;
            idx = i;
        }
    }
    
    printf("%d\n%d", max, idx);
    return 0;
}
