#include "main.h"

/**
 * _strcat - ppends the src string to the dest string
 * @dest: destination char
 * @src: source char
 * Return: pointer to str
 */

char *_strcat(char *dest, char *src)
{
	int index_1 = 0;
	int index_2 = 0;

	while (dest[index_1])
	{
		index_1++;
	}
	while (src[index_2])
	{
		dest[index_1++] = src[index_2];
		index_2++;
	}

	return (dest);
}
