#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    char word[20];
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", word);
        for(int i = 0; i < strlen(word); i++)
        {
            if(word[i] <= 90) printf("%c", word[i]+32);
            else printf("%c", word[i]);
        }
        printf("\n");
    }
    
    return 0;
}