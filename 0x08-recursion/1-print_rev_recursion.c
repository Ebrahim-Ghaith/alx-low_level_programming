#include "main.h"

/**
 * main : prints a rev string
 *        followed by a new line
 * @s : string which needed to be printed reversely
 * returns : string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
