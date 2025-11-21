#include <stdio.h>
#include <string.h>

int main(void)
{
    char num[10];
    int len; 

    while (1)
    {
        int leng = 2;
        scanf("%s", num);
        if(num[0] == '0') break;
        len = strlen(num);
        
        leng += len-1;
        for(int i = 0; i < len; i++)
        {
            if(num[i] == '1') leng += 2;
            else if(num[i] == '0') leng += 4;
            else leng += 3;
        }
        printf("%d\n", leng);
    }
    
    return 0;
}
