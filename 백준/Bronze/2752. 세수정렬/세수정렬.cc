#include <stdio.h>

int max(int a, int b);
int min(int a, int b);

int main(void)
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d %d %d", min(min(a, b), c), a+b+c-max(max(a, b), c)-min(min(a, b), c), max(max(a, b), c));
    
    return 0;
}

int max(int a, int b)
{
    if(a > b) a = a;
    else a = b;
    
    return a;
}
int min(int a, int b)
{
    if(a < b) a = a;
    else a = b;
    
    return a;
}