#include <stdio.h>

int max(int a, int b);

int main(void)
{
    int a,b,c,d;
    scanf("%d %d %d", &a, &b, &c);
    d = max(max(a, b), c);
    
    if(a == b && b == c) printf("%d", 10000+a*1000);
    else if(a == b && b != c) printf("%d", 1000+a*100);
    else if(a == c && c != b) printf("%d", 1000+a*100);
    else if(b == c && b != a) printf("%d", 1000+b*100);
    else printf("%d", d*100);
}

int max(int a, int b)
{
    if(a > b) a = a;
    else a = b;
    
    return a;
}