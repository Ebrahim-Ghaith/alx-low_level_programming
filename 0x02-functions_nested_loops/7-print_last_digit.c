#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: input number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
		x *= -1;
	_putchar(x + '0');
	return (x);
}
