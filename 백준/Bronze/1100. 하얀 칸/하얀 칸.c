#include <stdio.h>
#include <string.h>

int main(void)
{
    char ch[9];
    int sum = 0;
    
    for(int i = 1; i <= 8; i++)
    {
        scanf("%s", ch);
        
        for(int j = 1; j <= 8; j++)
        {
            if(i%2 == 1 && j%2 == 1 && ch[j-1] == 'F') sum++;
            else if(i%2 == 0 && j%2 == 0 && ch[j-1] == 'F') sum++;
        }
    }
    
    printf("%d", sum);
    
    return 0;
}