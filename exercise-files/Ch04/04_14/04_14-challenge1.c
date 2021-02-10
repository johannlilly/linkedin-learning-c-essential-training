#include <stdio.h>
#include <stdlib.h>

/* generate multiple lines of output */
int main()
{
	int a,rows;

	/* get and verify input */
	printf("How many rows (18 max)? ");
	scanf("%d",&rows);
	/* avoid out-of-range values */
	if( rows>18 )
		rows = 18;

	/* process the rows */
	printf("I will process %d rows\n",rows);
	a = rows >> 1;
	printf("%d is half of %d\n",a,rows);
	a = rows << 1;
	printf("%d is double of %d\n",a,rows);

	return 0;
}
