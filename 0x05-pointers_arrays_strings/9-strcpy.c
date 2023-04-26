#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copies the string pointed
 * @src: input src
 * @dest: destination to copied to
 * Return: nothing
 */


char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len])
	{
		dest[len] = src[len];
		len++;
	}

	return (dest);
}
