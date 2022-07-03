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
	int e;
	for (c = 0; (c <= 7); c++)
	{
		for (d = c; d <= 8; d++)
		{
			for (e = d; e <=9; e++)
			{
				if (e != d && c !=d)
				{
					putchar(d + '0');
					putchar(e + '0');
					if (c + d + e != 24)
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
}
