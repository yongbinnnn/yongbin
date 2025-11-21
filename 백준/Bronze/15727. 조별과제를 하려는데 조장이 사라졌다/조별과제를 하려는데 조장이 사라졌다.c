#include <stdio.h>

int main(void)
{
    int L, t;
    scanf("%d", &L);
    
    t = L/5;
    if(L%5 != 0) t++;
    
    printf("%d", t);
    
    return 0;
}