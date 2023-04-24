#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: nothing
 */
void jack_bauer(void)
{
	int x , y;

	for (x = 0; x < 24; x++ )
	{
		for (y = 0; y < 60 ; y++)
		{
			if (y < 10 && x < 10)
			{
				printf("0%d:0%d\n", x , y);
			}
			else if ( y >= 10 && x < 10)
			{
				printf("0%d:%d\n", x , y);
			}
			else if (y < 10 && x >= 10)
			{
				printf("%d:0%d\n", x , y);
			}
			else
			{
				printf("%d:%d\n", x , y);
			}
		}
	}
}
