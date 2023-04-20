#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: nothing
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
