#include <stdio.h>

int main()
{
	int a,b;

	b = 10;
	a = 1;
	for(; a<=10 ;)
	{
		printf("%2d %2d\n",a,b);
		b--;
	}

	return(0);
}

