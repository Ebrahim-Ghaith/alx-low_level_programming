#include "main.h"
#include <stdio.h>

/**
 * _strncat - ppends the src string to the dest string
 * @dest: destination char
 * @src: source char
 * @n: bytes from src
 * Return: pointer to str
 */

char *_strncat(char *dest, char *src, int n)
{
	int index_1 = 0;
	int index_2 = 0;

	n = n / 8;
	while (dest[index_1])
	{
		index_1++;
	}
	while (src[index_2])
	{
		if (index_2 <= n)
		{
			dest[index_1++] = src[index_2];
		}
		index_2++;
	}

	return (dest);
}
