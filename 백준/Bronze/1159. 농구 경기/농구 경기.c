#include <stdio.h>

int main(void)
{
    int n, c = 0;
    int alp[26];
    char name[30];
    
    for(int i = 0; i < 26; i++) alp[i] = 0;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", name);
        alp[name[0]-'a']++;
    }
    
    for(int i = 0; i < 26; i++)
    {
        if(alp[i] >= 5) printf("%c", i+'a');
        else c++;
    }
    
    if(c == 26) printf("PREDAJA");
    
    return 0;
}