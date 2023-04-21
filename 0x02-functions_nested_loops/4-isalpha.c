#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for lowercase character
 * @c: character for check it
 * Return: 0 if c is lowercase
 *	   1 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
