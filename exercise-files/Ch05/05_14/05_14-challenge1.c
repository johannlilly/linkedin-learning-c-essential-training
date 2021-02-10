#include <stdio.h>
#include <stdlib.h>

/* generate multiple lines of output */
int main()
{
	int row,c,rows,x;
	char column;

	/* get and verify input */
	printf("How many rows (18 max)? ");
	scanf("%d",&rows);
	/* avoid out-of-range values */
	if( rows>18 )
		rows = 18;

	/* use variable c to count the number rows */
	c = 0;
	/* process the rows */
	for( row=0; row<rows; row++ )
	{
		/* switch output every other row */
		/* separator row */
		if( row%2 )
		{
			for( x=0; x<40; x++ )
				putchar('=');
			putchar('\n');
		}
		else
		/* values row */
		{
			for( column='A'; column<='J'; column++ )
				printf(" %d%c ",c,column);
			putchar('\n');
			c++;
		}
	}

	return 0;
}
