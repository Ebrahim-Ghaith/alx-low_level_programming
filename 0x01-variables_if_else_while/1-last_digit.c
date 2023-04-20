#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - output tell us the last digit is
 *       postive , zero ,negative
 * Return: nothing
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (n < 5)
	{
		printf("Last digit of %d is %d and is less than 5\n", n, x);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, x);
	}
	return (0);
}
