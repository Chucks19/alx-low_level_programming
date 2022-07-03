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
	for (c = 0; (c <= 8); )
	{
		for (d = c; d <= 9; d++)
		{
			if (d != c)
			putchar (c + '0');
			putchar(d + '0');
			putchar(',');
			putchar(' ');
		}
		c++;
	}
		putchar('\n');
		return (0);
}
