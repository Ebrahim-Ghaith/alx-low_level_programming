#include "main.h"

/**
  * _strlen_recursion - get a length of string
  * @s: the string to get its length
  *
  * Return: length of string.
  */

int _strlen_recursion(char *s)
{
	int len;
	if (*s == '\0')
	{
		return;
	}

	s++;
	len++;
	_strlen_recursion(s);
	return len;
}
