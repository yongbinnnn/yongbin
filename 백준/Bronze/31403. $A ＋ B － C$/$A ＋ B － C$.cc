#include <stdio.h>

int main(void) 
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", a+b-c);
    int d;
    if(b == 1000)
    {
        d=a*10000+b;
    }
    else if(b/100 != 0)
    {
        d=a*1000+b;
    }
    else if(b/10 != 0)
    {
        d=a*100+b;
    }
    else
    {
        d=a*10+b;
    }
    
    printf("%d", d-c);
    return 0;
}