#include <stdio.h>
#include "main.h"

/**
 * rev_string - prints a rev_string, followed by a new line
 * @s: input string
 * Return: nothing
 */


void rev_string(char *s)
{
	int len = 0;
	char x;

	while (*s)
	{
		s++;
		len++;
	}
	while (len)
	{
		len--;
		x = s[len];
		printf("%c",x);
	}
	printf("%c",x);
}
