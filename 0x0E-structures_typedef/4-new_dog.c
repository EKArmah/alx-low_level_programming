#include "dog.h"
#include <string.h>
/**
 * new_dog - creates a new dog using dog_t typedef
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to new dog in dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	unsigned long int counter;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
	{
		return (NULL);
	}
	n_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	for (counter = 0; counter < strlen(name); counter++)
	{
		n_dog->name[counter] = name[counter];
	}
	n_dog->name[counter] = '\0';

	n_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (n_dog->owner == NULL)
	{
		free(n_dog);
		free(n_dog->name);
		return (NULL);
	}
	for (counter = 0; counter < strlen(owner); counter++)
	{
		n_dog->owner[counter] = owner[counter];
	}
	n_dog->owner[counter] = '\0';

	n_dog->age = age;

	return (n_dog);
}
