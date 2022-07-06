#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 1; j <= 10; j = j++)
	{
		for (i = 97; i <= 122; i = i + 1)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
