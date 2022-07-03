#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * betty style doc for function main goes there
 *
 * Return:Alway 0
 */
int main(void)
{
	int c;
	int d;
	for (c = 0; (c <= 8); c++)
	{
		putchar(c + '0');
		for (d = 0; d <= 9; d++)
		{
			if (d != c)
			putchar(d + '0');
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
