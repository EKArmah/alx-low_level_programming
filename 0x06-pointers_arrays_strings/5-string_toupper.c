#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: str to alter
 *
 * Return: pointer to s
 */

char *string_toupper(char *s)
{
	int i = 0, temp;

	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			temp = s[i];
			s[i] = temp - 32;
		}
		i++;
	}
	return (s);
}
