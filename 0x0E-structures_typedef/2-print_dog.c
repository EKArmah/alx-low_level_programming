#include "dog.h"

/**
 * check_nul - check if elem of d struct is null and replace with (nil)
 * @elem: elem from struct
 *
 * Return: string
 */
char *check_nul(char *elem)
{
	if (elem == NULL)
	{
		return ("(nil)");
	}
	return (elem);
}

/**
 * print_dog - prints details of a dog
 * @d: initialized dog struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *d_name, *d_owner;
	float d_age;

	if (d == NULL)
	{
		printf(" ");
	}
	else
	{
		d_name = check_nul(d->name);
		d_age = d->age;
		d_owner = check_nul(d->owner);
		printf("Name: %s\n", d_name);
		printf("Age: %f\n", d_age);
		printf("Owner: %s\n", d_owner);	
	}
}
