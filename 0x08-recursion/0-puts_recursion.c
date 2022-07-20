#include "main.h"
/**
 * _puts_recursion - Prints a string followed,a new line
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
	while(*s)
	_putchar(*s);
	_puts_recursion(s + 1);
}
_putchar('\n');
}
