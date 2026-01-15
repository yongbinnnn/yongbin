#include <stdio.h>
#include <string.h>

int main(void) 
{
    char a[10001];
    char b[10001];
    scanf("%s %s", a, b);
    int alen = strlen(a);
    int blen = strlen(b);
    long long sum = 0;
    
    if(a[0] == '0' || b[0] == '0')
    {
        printf("0");
        return 0;
    }
    
    for(int i = 0; i < alen; i++)
    {
        for(int j = 0; j < blen; j++)
        {
            int numa = a[i] - '0';
            int numb = b[j] - '0';
            sum += numa*numb;
        }
    }
    
    printf("%lld", sum);
    
    return 0;
}