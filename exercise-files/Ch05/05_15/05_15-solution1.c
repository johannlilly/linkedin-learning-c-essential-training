#include <stdio.h>
#include <stdlib.h>

/* output a newline */
void newline(void)
{
	putchar('\n');
}

/* output the separator row */
void separator_row(int w, char c)
{
	int x;

	for( x=0; x<w; x++ )
		putchar(c);
	newline();
}

/* generate multiple lines of output */
int main()
{
	int row,column,c,rows;

	/* get and verify input */
	printf("How many rows (18 max)? ");
	scanf("%d",&rows);
	/* avoid out-of-range values */
	if( rows>18 )
		rows = 18;

	c = 0;
	/* process the rows */
	for( row=0; row<rows; row++ )
	{
		/* switch output every other row */
		/* separator row */
		if( row%2 )
		{
			separator_row(40,'=');
		}
		else
		/* values row */
		{
			for( column='A'; column<='J'; column++ )
				printf(" %d%c ",c,column);
			newline();
			c++;
		}
	}

	return 0;
}
