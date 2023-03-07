#include "main.h"

/**
  * main :  fills the first n bytes of the memory area
  * @s: memory area to fill
  * @b: constant byte to fill
  * @n: bytes of memory area to fill
  *
  * returns :  pointer to the memory area s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;
	
	for (a = 0;a < n; a++)
	{
	s[a]=b;
	}
	
	return (s);
}
