#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	char str[50];
	char ans[50];
	scanf("%d", &n);
	scanf("%s", ans);
	for(int i = 0; i < n-1; i++)
	{
	    scanf("%s", str);
	    for(int j = 0; j < strlen(str); j++)
	    {
	        if(str[j] == ans[j]) ans[j] = ans[j];
	        else ans[j] = '?';
	    }
	}
	printf("%s", ans);
	return 0;
}