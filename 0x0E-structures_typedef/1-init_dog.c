#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialise a variable
 * @d: check the code
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
    d->name = name;
    d->age = age;
    d->owner = owner;
}
