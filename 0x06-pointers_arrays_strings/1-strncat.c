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
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		i++;
	}
	if(*(b + j) != '\0')
	{
		while (j < n)
		{

			*(s + i) = *(b + j);
			i++;
			j++;
		}
		else
		{
		break;
		}
	}
	return (s);
}
