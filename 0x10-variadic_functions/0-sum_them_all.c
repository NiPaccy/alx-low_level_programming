#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all parameters.
 * @n: The number of arguments passed to the function
 * @...: A variable number of parameters to sum
 *
 * Return: (0) if n == 0,
 * Otherwise, return the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list abc;
	unsigned int j, sum = 0;

	va_start(abc, n);

	for (j = 0; j < n; j++)
		sum += va_arg(abc, int);

	va_end(abc);

	return (sum);
}
