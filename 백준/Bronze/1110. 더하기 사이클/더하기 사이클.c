#include <stdio.h>

int main(void)
{
    int n, m;
    int count = 0;
    scanf("%d", &n);
    m = n;
    while(1)
    {
        m = (m%10)*10 + (m/10+m%10)%10;
        if(n == m) 
        {
            count++;
            break;
        }
        count++;
    }
    
    printf("%d", count);
    return 0;
}