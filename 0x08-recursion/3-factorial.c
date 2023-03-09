#include "main.h"

/**
  * factorial - get factorial of a given number
  * @n: number of factorial
  *
  * Return: factorial of number.
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
