#include "main.h"

/**
 * times_table - 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int j, k, opp;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 9; k++)
		{
			opp = j * k;
			if (opp == 0 && k < 9 && j == 0)
			{
				_putchar (opp + 48);
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			else if (opp == 0 && k != 9)
			{
				_putchar(opp + 48);
				_putchar(44);
				_putchar(32);
			}
			else if (opp == 0)
			{
				_putchar (opp + 48);
			}
			else if (opp > 0 && opp <= 9 && k != 9)
			{
				_putchar(32);
				_putchar(opp + 48);
				_putchar(44);
				_putchar(32);
			}
			else if (opp <= 9 && k == 9)
			{
				_putchar(32);
				_putchar(opp + 48);
			}
			else if (k != 9)
			{
				_putchar((opp / 10) + 48);
				_putchar((opp % 10) + 48);
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar((opp / 10) + 48);
				_putchar((opp % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
