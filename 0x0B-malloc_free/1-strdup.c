#include "main.h"

/**
 * _strdup - copy string to newly alloc'd mem space
 * @str: str to copy
 *
 * Return: pointer to new mem space
 */
char *_strdup(char *str)
{
	unsigned int count = 0, i;
	char *cpy;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[count])
	{
		count++;
	}

	cpy  = malloc(sizeof(char) * count);
	if (cpy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count; i++)
	{
		cpy[i] = str[i];
	}
	return (cpy);
}
