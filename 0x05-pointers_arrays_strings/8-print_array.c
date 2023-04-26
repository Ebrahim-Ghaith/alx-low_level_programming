#include <stdio.h>
#include "main.h"

/**
 * print_array - prints a 2 char string, followed by a new line
 * @a: input array
 * @n: array element
 * Return: nothing
 */


void print_array(int *a, int n)
{
	int x = 0;

	for (x = 0 ; x < n ; x++)
	{
		if (x == n - 1)
			printf("%d", a[x]);
		else
			printf("%d, ", a[x]);
	}
	printf("\n");
}
