#include "main.h"

/**
 * _strncpy - that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number to get
 * Return: return destination
 */


char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a])
	{
		if (a < n)
		{
			dest[a] = src[a];
		}
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
