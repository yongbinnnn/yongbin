#include <stdio.h>
#include <string.h>

int main(void) 
{
    int A, B, C, num;
    scanf("%d %d %d", &A, &B, &C);
    num = A*B*C;
    char D[20];
    sprintf(D, "%d", num);
    
    for(int i = 0; i < 10; i++)
    {
        num = 0;
        for(int j = 0; j < strlen(D); j++)
        {
            if((D[j] - '0') == i)
            {
                num++;
            }
        }
        printf("%d\n", num);
    }
    
	return 0;
}