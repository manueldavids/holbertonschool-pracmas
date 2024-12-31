#include <stdio.h>

int main(void)
{
	char ch = '7';

	if (ch >= 48 && ch <= 57)
	{
		printf("The charecter is a digit.\n");
	}
	else
	{
		printf("The charecter is not a digit.\n");
	}
	return 0;
}
