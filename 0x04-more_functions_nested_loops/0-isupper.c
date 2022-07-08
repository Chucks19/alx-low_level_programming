#include <stdio.h>
#include "main.h"
/**
 * _isupper - check the code.
 * @c: An input value
 * Description:: A function that checks for uppercase character.
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	char A;
	for (A = 'A'; A <= 'Z'; A++)
	{ 
		if (c == A) 
			return (1);
		else 
			return (0);
	}
}

