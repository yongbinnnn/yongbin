#include <stdio.h>
#include <string.h>

int main(void) 
{
    int s1, s2, s3;
    static int ns[80];
    scanf("%d %d %d", &s1, &s2, &s3);
    
    for(int i = 1; i <= s1; i++)
    {
        for(int j = 1; j <= s2; j++)
        {
            for(int k = 1; k <= s3; k++)
            {
                ns[i+j+k]++;
            }
        }
    }
    
    int max = 0;
    int result = 0;
    
    for(int i = 3; i <= s1+s2+s3; i++)
    {
        if(ns[i] > max)
        {
            max = ns[i];
            result = i;
        }
    }
    
    printf("%d", result);
    
    return 0;
}