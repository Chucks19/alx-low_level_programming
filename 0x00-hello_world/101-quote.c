#include <std.io>
/**
 * main - Entry
 *
 * Return: a;lways 0
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
       	write(2, quote, 59);
	return (1);
