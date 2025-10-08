#include <stdio.h>

int main(void) 
{
    int num[10];
    int count = 10;
    
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
        num[i] %= 42;
    }
    
    for(int j = 0; j < 10; j++)
    {
        for(int k = j+1; k < 11; k++)
        {
            if(num[j] == num[k])
            {
                count--;
                break;
            }
        }
    }
    
    printf("%d", count);
    
    return 0;
}