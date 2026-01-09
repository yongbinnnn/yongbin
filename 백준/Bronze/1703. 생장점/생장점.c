#include <stdio.h>

int main(void)
{
    int age, a, b;
    
    while(1)
    {
        int branch = 1;
        scanf("%d", &age);
        if(age == 0) break;
        for(int i = 0; i < age; i++)
        {
            scanf("%d %d", &a, &b);
            branch *= a;
            branch -= b;
        }
        printf("%d\n", branch);
    }
    return 0;
}