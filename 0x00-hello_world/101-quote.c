/*
 * file : 101-quote.c
 * Auth : ebrahim ghaith
*/

#include <unistd.h>

/**
 * main --> prints exactly and that piece of art is useful" - Dora Korpar
 *         2015-10-19 followed by a new line, to the standard error.
 * Return: always 1.
 */
int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);

	return (1);
}
