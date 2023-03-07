#include "main.h"
#include <stdio.h>

/*
 * main :  fills the first n bytes of the memory area
 *	 pointed to by s with the constant byte b
 * returns :  pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n);
{
	s=&b;
	*s=b;
	
	return *s;
}
