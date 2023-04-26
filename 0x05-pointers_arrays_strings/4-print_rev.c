#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string, followed by a new line
 * @s: input string
 * Return: nothing
 */


void print_rev(char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}
	len += 1;
	while (len)
	{
		_putchar(*s);
		s--;
		--len;
	}
	_putchar('\n');
}
