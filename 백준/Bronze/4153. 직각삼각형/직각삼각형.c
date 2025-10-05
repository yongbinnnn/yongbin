#include <stdio.h>

int max(int a, int b);
int min(int a, int b);

int main(void)
{
    int maxi, mini, midl;
    
    while(1)
    {
        int a = 1; 
        int b = 1; 
        int c = 1;
        scanf("%d %d %d", &a, &b, &c);
        if(a == 0 && b == 0 && c == 0)
        {
            break;
        }
        maxi = max(max(a,b),c);
        mini = min(min(a,b),c);
        midl = a + b + c - maxi - mini;
        if(maxi*maxi == mini*mini + midl*midl)
        {
            printf("right\n");
            continue;
        }
        else
        {
            printf("wrong\n");
            continue;
        }
        return 0;
    }
}

int max(int a, int b)
{
    int par;
    
    if(a > b)
    {
        par = a;
    }
    else if(a < b)
    {
        par = b;
    }
    
    return par;
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