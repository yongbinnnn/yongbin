#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[255];
    
    while(1)
    {
        int count = 0;
        scanf("%[^\n]", str);
        if(str[0] == '#') break;
        getchar();
        for(int i = 0; i < strlen(str); i++)
        {
            if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
            {
                count++;
            }
        }
        printf("%d\n", count);
        continue;
    }
    
    return 0;
}