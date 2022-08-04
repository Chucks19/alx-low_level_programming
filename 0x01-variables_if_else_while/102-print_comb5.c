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
	int f;

	for (c = 0; (c <= 9); c++)
	{
		for (d = 0; d <= 8; d++)
		{
			for (e = 0; e <= 9; e++)
			{
				for (f = 0; f <= 9; f++)
				{
					if ((c + d) > (e + f))
						break;
					else ((c + d) < (e + f))
					{
						putchar(c + '0');
						putchar(d + '0');
						putchar(' ');
						putchar(e + '0');
						putchar(f + '0');
						if ( c != 9 && d != 8)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
