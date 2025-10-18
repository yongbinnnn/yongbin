#include <stdio.h>

int main(void)
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int max = num1;
    int min = num1;
    
    while (1)
    {
        if(num1 % max == 0 && num2 % max == 0)
        {
            break;
        }
        max--;
    }
    
    while (1)
    {
        if(min % num1 == 0 && min % num2 == 0)
        {
            break;
        }
        min++;
    }
    
    printf("%d\n%d", max, min);
    return 0;
}