#include <stdio.h>

int main(void)
{
    char n[11];
    int a, w;
    
    while(1){
        scanf("%s %d %d", n, &a, &w);
        if(n[0] == '#') break;
        
        if(a > 17 || w >= 80) printf("%s Senior\n", n);
        else printf("%s Junior\n", n);
    }
    
    return 0;
}