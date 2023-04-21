#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	char x = 'a';
	int y;

	for (y = 0; y <= 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar('x');
		}
		_putchar('\n');
	}
}
