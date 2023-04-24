#include <stdio.h>

/**
 * _abs - that computes the absolute value of an integer
 * @x: number for absolute
 * Return: absolute of number;
 */

int _abs(int x)
{
	if (x > 0)
		return (x);
	else if (x < 0)
		return (-1 * x);
	else
		return (x);

}
