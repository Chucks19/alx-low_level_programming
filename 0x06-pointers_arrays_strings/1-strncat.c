#include "holberton.h"
/**
 * _memset - sets memory to array
 * @s: array to set
 * @b: value to set it as
 * @n: n amount of times
 * Return: char value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i, j = 0, < n;
	while(*(s + i) != '\0')
	{
		i++;
	}
	if(*(b + j) != '\0')
	{
		*(s + i) = *(b + j);
		i++;
		j++;
	}
	else
	{
		break;
	}
	return (s);
}
