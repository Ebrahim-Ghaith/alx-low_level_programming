#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character for check it
 * Return: 0 if c is lowercase
 *	   1 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
