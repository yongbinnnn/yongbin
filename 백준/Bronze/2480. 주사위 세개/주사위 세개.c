#include <stdio.h>

int max(int a, int b);

int main(void)
{
	int a,b,c,price;
	scanf("%d %d %d", &a, &b, &c);
	if(a == b && b == c) price = 10000+a*1000;
	else if(a == b) price = 1000+a*100;
	else if(b == c) price = 1000+b*100;
	else if(c == a) price = 1000+c*100;
	else price = max(max(a,b),c)*100;
	printf("%d", price);
	return 0;
}

int max(int a, int b)
{
    int par;
    if(a > b) par = a;
    else par = b;
    return par;
}