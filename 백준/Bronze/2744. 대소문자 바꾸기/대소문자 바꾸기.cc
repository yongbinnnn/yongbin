#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[100];
    scanf("%s", a);
    int n = strlen(a);
    
    for(int i = 0; i < n; i++)
    {
        if(a[i] > 93) a[i] = a[i]-32;
        else a[i] = a[i]+32;
    }
    
    printf("%s", a);
    
    return 0;
}