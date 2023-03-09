#include "main.h"

/**
  * main : prints a string
  *        followed by a new line
  * @s : string which needed to be printed
  * returns : string
  */

void _puts_recursion(char *s)
{
	if(*s)
	{
		printf("%c",*s);
		_puts_recursion(s+1);
	}
	else
		_putchar("\0");
}
