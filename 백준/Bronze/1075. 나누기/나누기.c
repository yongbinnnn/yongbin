#include <stdio.h>

int main(void)
{
    int N, F;
    scanf("%d %d", &N, &F);
    int s = N/100*100;
    while(1)
    {
        if(s%F == 0) break;
        s++;
    }
    if(s % 100 < 10) printf("0%d", s%100);
    else printf("%d", s%100);
    
    return 0;
}
