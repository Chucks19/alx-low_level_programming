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
	char B;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (B = 'A'; B <= 'F'; B++)
	{
		putchar(B);
	}
		putchar('\n');
		return (0);
}
