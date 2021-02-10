#include <stdio.h>

void line(int length, char c)
{
	int a;

	for( a=0; a<length; a++)
		putchar(c);
	putchar('\n');
}

int main()
{
	puts("Report on Extraterrestrial Activity");
	line(35,'-');

	return(0);
}
