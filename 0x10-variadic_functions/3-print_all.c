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
				s = va_arg(pan, char*) 
				if (s == null)
					printf("%s", nil)
                                printf("%s", va_arg(pan, s);
                                break:
		}
		i++;
	}
	printf("\n");
	va_end(pan)
}
