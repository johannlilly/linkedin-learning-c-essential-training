#include <stdio.h>

int main()
{
	int a,b;

	printf("How long is the line? ");
	scanf("%d",&a);

	b = 0;
	while(b<a)
	{
		putchar('-');
		b++;
	}
	putchar('\n');

	return(0);
}
