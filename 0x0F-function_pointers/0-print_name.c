#include "function_pointers.h"

/**
 * print_name : print a name
 * @name : name to printed
 * @f : pointer to func tthat prints name
 * returns : nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if(name == NULL || f == NULL)
		return;
	f(name);
}
