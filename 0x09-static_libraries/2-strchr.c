#include "main.h"

/**
 * _strchr - Locate a character in a string.
 * @s: String.
 * @c: Character.
 * Return: The firs occuerrence of hte character in the string or NULL.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
