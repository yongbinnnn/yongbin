#include <stdio.h>

int main(void)
{
	int t, a, b;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
	    scanf("%d %d", &a, &b);
	    if(a%10 == 1 || a%10 == 6 || a%10 == 5) printf("%d\n", a%10);
	    else if(a%10 == 0) printf("%d\n", 10);
	    else if(a%10 == 4 || a%10 == 9)
	    {
		    if(b%2 == 1) printf("%d\n", a%10);
		    else printf("%d\n", ((a%10)*(a%10))%10);
	    }
	    else
	    {
		    switch(b%4)
		    {
		    case 0:
			    printf("%d\n",((a%10)*(a%10)*(a%10)*(a%10))%10);
			    break;
		    case 1:
			    printf("%d\n", a%10);
			    break;
		    case 2:
			    printf("%d\n", ((a%10)*(a%10))%10);
			    break;
		    case 3:
			    printf("%d\n", ((a%10)*(a%10)*(a%10))%10);
			    break;
		    }
	    }
	}
	return 0;
}