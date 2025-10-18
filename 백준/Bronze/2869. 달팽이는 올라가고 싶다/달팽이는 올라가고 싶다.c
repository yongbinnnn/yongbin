#include <stdio.h>

int main(void)
{
    int a,b,v;
    int height = 0;
    int day = 0;
    scanf("%d %d %d", &a, &b, &v);
    
    if((v-a)%(a-b) == 0)
    {
        day = (v-a)/(a-b) + 1;
    }
    else if((v-a)%(a-b) != 0)
    {
        day = (v-a)/(a-b) + 2;
    }
    
    printf("%d", day);
}

