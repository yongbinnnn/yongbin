#include <stdio.h>

int min(int a, int b);

int main(void)
{
    int h,m,l,c,s;
    scanf("%d %d %d %d %d", &h, &m, &l, &c, &s);
    printf("%d", min(min(h, m), l)+min(c, s)-50);
    
    return 0;
}

int min(int a, int b)
{
    if(a < b) a = a;
    else a = b;
    
    return a;
}