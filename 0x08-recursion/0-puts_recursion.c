#include "main.h"

/**
 * main : prints a string
 *        followed by a new line
 * @s : string which needed to be printed
 * returns : string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
