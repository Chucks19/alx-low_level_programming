#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i = i + 1)
	{
		_putchar(i);
	}
	_putchar('\n');
}
