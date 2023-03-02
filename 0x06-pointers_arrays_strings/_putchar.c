#iclude "main.h"
#include <unistd.h>

/*
 * _putchar - writes the character c to stdout
 * @c : the character tb be printed
 * return : 1 on success
 * error : returned -1
 */

int _puchar(char c)
{
	return (write(1,&c,1);
}
