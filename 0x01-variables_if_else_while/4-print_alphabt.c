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
	char c;

	for (c = 'a'; (c <= 'z'); c++)
	{
		if (c != 'q' && c != 'e')
		putchar(c);
	}
		putchar('\n');
		return (0);
}
