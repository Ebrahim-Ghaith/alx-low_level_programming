#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: input string
 * Return: nothing
 */


void _puts(char *str)
{

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
