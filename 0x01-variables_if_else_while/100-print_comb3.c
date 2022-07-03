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

	for (c = '0'; (c <= '8'); c++)
	{
		for (d = c; d <= '9'; d++)
		{
		if (c != d)
		{
			putchar(c);
			putchar(d);
			if ((c + d) != '17')
			{
				putchar(',');
				putchar(' ');
			}
		}
		}
	}
		putchar('\n');
		return (0);
}
