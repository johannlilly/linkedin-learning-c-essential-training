#include <stdio.h>

int main()
{
	int a,b;

	b = 10;
	a = 1;
	/* variable a must be incremented to help
	   trigger the loop's demise */
	/* you can do so in the for statement: */
	for(; a<=10 ;)
	{
		printf("%2d %2d\n",a,b);
		b--;
		/* I chose to do so here: */
		a++;
	}

	return(0);
}

