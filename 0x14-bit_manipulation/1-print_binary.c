#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary of number
 * @n: number converted
 * return: converted to binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int printed = 0;

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			putchar('1');
			printed = 1;
		}
		else if (printed)
		{
			putchar('0');
		}
		mask >>= 1;
	}
	if (!printed)
	{
		putchar('0');
	}
}
