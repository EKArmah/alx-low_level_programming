#include "dog.h"
#include <string.h>
/**
 * dog_t new_dog - creates a new dog using dog_t typedef
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to new dog in dog_t 
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	long unsigned int counter;

	n_dog = malloc(sizeof(dog_t));
	n_dog->name = malloc(sizeof(char) * strlen(name));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	for (counter = 0; counter < strlen(name); counter++)
	{
		n_dog->name[counter] = name[counter];
	}


	n_dog->owner = malloc(sizeof(char) * strlen(owner));
	if(n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (counter = 0; counter < strlen(owner); counter++)
	{
		n_dog->owner[counter] = owner[counter];
	}

	n_dog->age = age;

	return (n_dog);
}
