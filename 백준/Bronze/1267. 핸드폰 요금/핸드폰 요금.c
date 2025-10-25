#include <stdio.h>

int main(void)
{
	int n, t;
	int ysum = 0;
	int msum = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
	    scanf("%d", &t);
	    ysum += 10*(1+t/30);
	    msum += 15*(1+t/60);
	}
	if(ysum < msum) printf("Y %d", ysum);
    else if(ysum > msum) printf("M %d", msum);
	else printf("Y M %d", ysum);
	
	return 0;
}