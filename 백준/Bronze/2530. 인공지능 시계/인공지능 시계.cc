#include <stdio.h>

int main(void)
{
	int h, m, s;
	int sh, sm, ss;
	scanf("%d %d %d %d", &h, &m, &s, &ss);
	sh = ss/3600;
	sm = (ss/60)%60;
	ss = ss % 60;
	
	h = (sh+h+(sm+m+(s+ss)/60)/60)%24;
	m = (sm+m+(ss+s)/60)%60;
	s = (ss+s)%60;
	
	printf("%d %d %d", h, m, s);
	return 0;
}

