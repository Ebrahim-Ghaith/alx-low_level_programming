#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: nothing
 */


int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
