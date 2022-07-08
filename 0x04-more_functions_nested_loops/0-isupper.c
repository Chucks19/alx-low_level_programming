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
	char i;
	for (i = 'A'; i <= 'Z'; i++)
	{ 
		if (c == i) 
			return (1);
	}
}

