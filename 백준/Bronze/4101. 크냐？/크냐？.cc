#include <stdio.h>

int main(void)
{
    int a, b;
    
    while(1)
    {
        scanf("%d %d", &a, &b);
        
        if(a > b)
        {
            printf("Yes\n");
        }
        else if(a <= b)
        {
            if(a == 0 && b == 0)
            {
                break;
            }
            else
            {
                printf("No\n");
            }    
        }
    }
    
    return 0;
}