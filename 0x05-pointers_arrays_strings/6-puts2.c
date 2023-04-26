#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints a 2 char string, followed by a new line
 * @str: input string
 * Return: nothing
 */


void puts2(char *str)
{
	int len = 0;

	while (str[len])
	{
		if (len % 2 == 0)
		{
			_putchar(str[len]);
		}
		len++;
	}
	_putchar('\n');
}
