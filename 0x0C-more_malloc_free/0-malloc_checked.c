#include "main.h"
/**
 * malloc_checked - function to check
 * @b: atring we need to duplicate
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *c = NULL;
	c = malloc(sizeof(char) * b);
	if (c == 0)
		exit(98);
	return (c);
}
