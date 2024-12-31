#include <stdio.h>

int main(void)
{

	int age;

	printf("Please enter your age:");
	scanf("%d", &age);
	if(age <  21)
	{
		printf("You are to young to drink!\n");
	}
	else if(age < 50)
	{
		printf("Allowed!\n");
	}
	else
	{
		printf("Free Drink!\n");
	}
	return 0;
}
