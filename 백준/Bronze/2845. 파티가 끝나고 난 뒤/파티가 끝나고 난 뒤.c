#include <stdio.h>

int main(void){
    int l, p;
    scanf("%d %d ", &l, &p);
    int num[5];
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
        printf("%d ", num[i]-l*p);
    }
    return 0;
}