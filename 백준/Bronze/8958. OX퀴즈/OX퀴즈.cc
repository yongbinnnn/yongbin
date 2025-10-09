#include <stdio.h>
#include <string.h>

int main(void) 
{
    int num;
    int count = 0;
    int sum = 0;
    char ans[80];
    scanf("%d", &num);
    
    for(int i = 0; i < num; i++)
    {
        sum = 0;
        count = 0;
        scanf("%s", ans);
        for(int j = 0; j < strlen(ans); j++)
        {
            if(ans[j] == 'O')
            {
                count++;
                sum += count;
            }
            else if(ans[j] == 'X')
            {
                count = 0;
            }
        }
        printf("%d\n", sum);
    }
    
    return 0;
}