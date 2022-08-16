#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	while (str)
		i++;

	p = (char *)malloc(sizeof(char) * i);

	if (p == NULL)
		return (NULL);

	while (str)
		*p++ = *str++;

	return (p);
}
