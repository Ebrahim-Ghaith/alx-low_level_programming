#include "main.h"

/**
  * _strlen_recursion - get a length of string
  * @s: the string to get its length
  *
  * Return: length of string.
  */

void _print_rev_recursion(char *s)
{
	int len;
	if (*s == '\0')
	{
		return;
	}

	s++;
	len++;
	_print_rev_recursion(s);
	return (len);
}
