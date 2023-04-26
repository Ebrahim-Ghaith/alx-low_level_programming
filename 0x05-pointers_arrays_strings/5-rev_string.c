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
	int index;
	char tmp;

	while (s[len])
	{
		len++;
	}
	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
