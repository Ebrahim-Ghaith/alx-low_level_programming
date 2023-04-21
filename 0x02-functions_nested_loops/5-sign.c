#include <stdio.h>
#include "main.h"

/**
 * print_sign - checks for lowercase character
 * @n: number for check it
 * Return: 0 if c is lowercase
 *	   1 0 otherwise
 */

int print_sign(int n)
{

	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (0);
		_putchar('-');
	{
	else
	{
		return (-1);
		_putchar('0');
	}
	return (0);
}
