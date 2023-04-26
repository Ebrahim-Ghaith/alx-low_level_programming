#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints a 2 char string, followed by a new line
 * @str: input string
 * Return: nothing
 */


void puts_half(char *str)
{
	int len = 0;
	int x = 0;

	while (str[len])
	{
		len++;
	}
	x = len / 2;
	while (str[x])
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
