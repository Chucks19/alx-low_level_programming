#include <stdlib.h>
#include "dog.h"

/**
 * struct dog - check the code
 * @name: gy
 * @age: yy
 * @owner: yu
 * Description: hggg
 *
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}