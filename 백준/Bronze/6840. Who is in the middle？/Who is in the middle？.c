#include <stdio.h>

int max(int a, int b);
int min(int a, int b);
int main(void)
{
    int a, b, c;
    int maxi, mini;
    scanf("%d %d %d", &a, &b, &c);
    maxi = max(max(a,b),c);
    mini = min(min(a,b),c);
    printf("%d",a+b+c-mini-maxi);
    return 0;
}
int max(int a, int b)
{
    int par;
    if(a < b)
    {
        par = b;
    }
    else if(b < a)
    {
        par = a;
    }
    return par;
}
int min(int a, int b)
{
    int par;
    if(a > b)
    {
        par = b;
    }
    else if(b > a)
    {
        par = a;
    }
    return par;
}