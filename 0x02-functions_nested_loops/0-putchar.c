#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char joy = '_putchar';
	
	for (joy = 0; joy < 8; joy = joy++)
	{
		putchar(joy);
	}
	putchar('\n');
	return (0);
}
