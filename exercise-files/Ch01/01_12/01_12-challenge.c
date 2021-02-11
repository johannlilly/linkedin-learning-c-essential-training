#include <stdio.h>
#include <stdlib.h>

/* 01_12 Challenge
 * 
 * 1) get and verify input
 * 2) avoid out of range values
 * 3) process the rows
 */
int main() {
	// TODO: get better performance than O(2n**2)

	// valid letters (first 18 of alphabet)
	const char *LETTERS[18] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R"};
	
	int rows;

	fputs("How many rows (18 max)? ", stdout);
	
	// capture input if within valid range
	// TODO: validate data type
	// TODO: provide feedback messages
	do {
		scanf("%d", &rows);
	}
	while (
		0 > rows || rows > 18
	);

	// loop over each row and column to print
	for (int i=0; i<rows; i++)
	{
		for (int j=0; j<rows; j++)
		{
		 	// TODO: evaludate size of rows outside of for-loop to prevent repat evals
			if (rows > 9 && i < 10) { printf("  %d%s ", i, LETTERS[j]); }
			else { printf(" %d%s ", i, LETTERS[j]); }
		}

		fputs("\n", stdout);

		for (int j=0; j<rows; j++)
		{
		 	// TODO: evaludate size of rows outside of for-loop to prevent repat evals
			if (rows > 9) { fputs("=====", stdout); }
			else { fputs("====", stdout); }
		}

		fputs("\n", stdout);
	}

	return 0;
}
