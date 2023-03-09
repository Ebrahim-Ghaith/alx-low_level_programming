#include "main.h"

/**
  * factorial - get power of a given number
  * @x: number of base 
  * @y : number of power level
  *
  * Return: power of number.
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x,y-1) );
}
