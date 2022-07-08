#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: always 0
 */
int main(void)
{
	long int i, j, n, k;

	j = 1;
	k = 2;
	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		j = k;
		n = j + k;
		k = n;
	}
	return (0);
}
