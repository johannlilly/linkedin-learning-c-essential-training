#include <stdio.h>
#include <stdlib.h>

/* generate multiple lines of output */
int main()
{
	int rows;

	/* get and verify input */
	printf("How many rows (18 max)? ");
	scanf("%d",&rows);
	/* avoid out-of-range values */

	/* process the rows */
	printf("I will process %d rows\n",rows);

	return 0;
}
