#include <stdio.h>

int min(int a, int b);

int main(void)
{
    int x,y,w,h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int mini = min(min(min(h-y,x),w-x),y);
    printf("%d", mini);
    return 0;
}

int min(int a, int b)
{
    int par;
    if(a < b)
    {
        par = a;
    }
    else if(a > b)
    {
        par = b;
    }
    return par;
}