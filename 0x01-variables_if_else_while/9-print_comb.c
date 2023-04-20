#include <stdio.h>

/**
 * main - prints all digit num from 0 to 9 with ,
 * Return: nothing
 */

int main(void)
{
	int x = 48;
	int y = 44;
	int z = 32;
	int t = 36;

	while (x < 58)
	{
		if (x == 57)
		{
			putchar(x);
			putchar(t);
		}
		else
		{
			putchar(x);
			putchar(y);
			putchar(z);
		}
		x++
	}
	return (0);
}
