#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - get sum of all its parameters
 * @n: number of parameters
 *
 * return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int i = 0;

	int sum = 0;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, const unsigned int);

	va_end(ap);

	return (sum);
}
