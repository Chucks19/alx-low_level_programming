#include "variadic_functions.h"
#include <string.h>


/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c, ", va_arg(valist, int));
			break;
		case 'i':
			printf("%d, ", va_arg(valist, int));
			break;
		case 'f':
			printf("%f, ",  va_arg(valist, double));
			break;
		case 's':
			str = va_arg(valist, char *);
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s, ", str);
			break;
		} i++;
		j = 0;
		while (t_arg[j])
		{
			if (strcmp(format[i] == t_arg[j]) && format != "\0")
			{
				printf(", ");
				break;
			} j++;
		}
	}
	printf("\n"), va_end(valist);
}
