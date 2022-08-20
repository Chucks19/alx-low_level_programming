#include "variadic_functions.h"

/**
 * sum_them_all - function that add it args
 * @n: number of args
 * @pta: pointer to arg
 *
 * return - return type
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i;
	va_list pta;
	
	va_start(pta, n);

	if (n == 0)
		return 0;
	for (i = 0; i < n; i++)
		sum += va_arg(pta, int);
	va_end(pta);
	return (sum);
}
