#include "dog.h"

/**
 * free_dog - frees an initialized dog
 * @d: initialized dog struct
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
