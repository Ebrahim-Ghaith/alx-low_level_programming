#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number you need to know
 * @index: index
 * Return: the value of the bit at index index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
