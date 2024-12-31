#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
	char c;

	c = CHAR_MIN;
	while(c != CHAR_MAX)
	{
		printf("%d\n", c);
		c = c+1;
	}
	return 0;
} 
