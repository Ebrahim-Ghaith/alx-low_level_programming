#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - output tell us that number is
 *       postive , zero ,negative
 * Return: nothing
 */
int main()
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive");
	}
	else if (n < 0)
	{
		printf("is negative");
	}
	else
	{
		printf("is zero");
	}
	return (0);
}
