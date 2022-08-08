#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_number - print all
 *
 * @n: integer
 *
 */ return: return 0

void print_number(int n)
{
	if (n < 0)
	{
		_putchar ('-');
		_putchar (n);
	}
	if (n < 9)
		_putchar (n);
	if (n > 9)
	{
		_putchar (n / 10);
		print_number (n % 10)
	}
	return (0);
}
