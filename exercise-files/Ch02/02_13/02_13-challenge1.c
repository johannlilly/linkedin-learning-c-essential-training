#include <stdio.h>
#include <stdlib.h>

#define BUFFERSIZE 2

/* generate multiple lines of output */
int main()
{
	/* get and verify input */
	/* avoid out-of-range values */
	/* process the rows */
	// TODO: get better performance than O(2n**2)

	// valid letters (first 18 of alphabet)
	const char *LETTERS[18] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R"};
	char *endptr, *text = calloc(1,1), buffer[BUFFERSIZE];
	int rows = 0;

	fputs("How many rows (18 max)? ", stdout);
	
	// capture input if within valid range
	// TODO: validate data type
	// TODO: provide feedback messages

	while (fgets(buffer, BUFFERSIZE, stdin))
	{
		text = realloc(text, strlen(text)+1+strlen(buffer));
		
		if (!text)
		{
			fputs("Try again. Input is required.", stdout);
			continue;
		}

		rows = strtol(text, &endptr, 9);

		if (rows < 0)
		{
			fputs("Try again. Your input was too small.", stdout);
			continue;

		}
		else if (rows > 18)
		{
			fputs("Try again. Your input was too large.", stdout);
			continue;
		}

		strcat(text, buffer);

		printf("Application will build %s rows\n\n", buffer);

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
       
			break;
		}

		break;
	}

	return 0;
}
