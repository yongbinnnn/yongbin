#include <stdio.h>

int main(void)
{
    int b1, b2, b3, mb;
    scanf("%d %d %d", &b1, &b2, &b3);
    
    if(((b1 > b2) && (b3 > b1)) || ((b1 > b3) && (b2 > b1)))
    {
        mb = b1;
    }
    else if(((b2 > b1) && (b3 > b2)) || ((b2 > b3) && (b1 > b2)))
    {
        mb = b2;
    }
    else if(((b3 > b2) && (b1 > b3)) || ((b3 > b1) && (b2 > b3)))
    {
        mb = b3;
    }
    
    printf("%d", mb);
    
    return 0;
}
