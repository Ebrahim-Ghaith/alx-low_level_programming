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

	while (x <= 57)
	{

		putchar(x);
		if (x == 57)
		{
			break;
		}
		putchar(y);
		putchar(z);
		x++;
	}
	putchar('\n');
	return (0);
}
