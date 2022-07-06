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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
<<<<<<< HEAD
	if (n % 10 > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, n % 10);
	}
	else if (n % 10 < 0 && n % 19 != 0)
=======
	if ((n % 10) > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, n % 10);
	}
	else if ((n % 10) < 0 && (n % 10) != 0)
>>>>>>> e971aa49177854defc7ba83047e505c8b001a02b
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
