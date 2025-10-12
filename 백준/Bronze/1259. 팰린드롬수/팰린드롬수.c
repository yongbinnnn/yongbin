#include <stdio.h>
#include <string.h>

int main(void) 
{
    char num1[50];
    char num2[50];
    while(1)
    {
        scanf("%s", num1);
        if(num1[0] == '0') break;
        for(int i = 0; i < strlen(num1); i++)
        {
            num2[i] = num1[strlen(num1)-i-1];
        }

        for(int i = 0; i <strlen(num1); i++)
        {
            if(num1[i] == num2[i])
            {
                if(i == strlen(num1)-1)
                {
                    printf("yes\n");
                }
            }
            else
            {
                printf("no\n"); 
                break;
            }  
        }
    }
    
    return 0;
}