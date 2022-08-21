#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list Pan;
	int i = 0;
	char *st;
	va_start(pan, format);
	while(format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(pan, int);
				break:
			case 'i':
                                printf("%i", va_arg(pan, int);
                                break:

			case 'f':
                                printf("%f", va_arg(pan, double);
                                break:
			case 's':
				st = va_arg(pan, char*) 
				if (st == null)
					printf("%s", nil)
                                printf("%s", va_arg(pan, st);
                                break:
		}
		i++;
	}
	printf("\n");
	va_end(pan)
}
