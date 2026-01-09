#include <stdio.h>

int main(void)
{
    int a, b, col, row;
    scanf("%d %d", &a, &b);
    
    col = (b+3)/4-(a+3)/4;
    
    if(a%4 == 0) a = 4;
    else a = a%4;
    
    if(b%4 == 0) b = 4;
    else b = b%4;
    
    row = a-b;
    
    if(col < 0) col = -col;
    if(row < 0) row = -row;
    
    printf("%d", col+row);
    
    return 0;
}
