#include <stdio.h>

int main(void)
{
    int num;
    int room = 1;
    scanf("%d", &num);
    int divi = (num-2)/6+1;
    
    if(num == 1) printf("%d", room);
    else
    {
        while(1)
        {
            divi -= room;
            if(divi <= 0) break;
            room++;
        }
        printf("%d", room+1);
    }

    return 0;
}