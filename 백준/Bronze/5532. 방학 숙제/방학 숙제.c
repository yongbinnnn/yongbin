#include <stdio.h>

int day(int a, int b);

int main(void)
{
    int L,A,B,C,D;
    scanf("%d %d %d %d %d", &L, &A, &B, &C, &D);
    
    if(day(A,C) > day(B,D)) printf("%d", L-day(A,C));
    else printf("%d", L-day(B,D));
    
    return 0;
}

int day(int a, int b)
{
    int par = a/b;
    if(a%b != 0) par++;
    
    return par;
}