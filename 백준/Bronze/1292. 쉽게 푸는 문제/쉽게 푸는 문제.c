#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int i = 1, j = 1, sum = 0;
    while(1)
    {
        if(a <= 0 && b <= 0) 
        {
            i--;
            j--;
            break;
        }
        if(a > 0)
        {
            a -= i;
            i++;
        }
        if(b > 0)
        {
            b -= j;
            j++;
        } 
    }

    if(a == b && i == j) sum = i;
    else if(a != b && i == j) sum = (b-a+1)*i;
    else
    {
        for(int k = i+1; k < j; k++) sum += k*k;
        sum += (i * (1+(-a)))+(j*(j+b));
    }
    printf("%d", sum);
    return 0;
}

