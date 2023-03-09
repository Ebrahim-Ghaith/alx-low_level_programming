#include "main.h"

/**
 * main : prints a rev string
 *        followed by a new line
 * @s : string which needed to be printed reversely
 * returns : string
 */

void _puts_recursion(char *s)
{
	int len;
	while(s[len])
	{
		len++;
	}
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s[len]);
	s--;
	_puts_recursion(s);
}
