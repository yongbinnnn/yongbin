#include <stdio.h>
#include <string.h>

int main(void)
{
    int test;
    scanf("%d", &test);
    char a[1000];
    
    for(int i = 0; i < test; i++)
    {
        scanf("%s", a);
        printf("%c%c\n", a[0], a[strlen(a)-1]);
    }
    
    return 0;
}