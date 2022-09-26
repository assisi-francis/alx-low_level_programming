#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: the string to be searched
 * @accept: the set of bytes to be searched
 * Return: pointer to the matched byte or NULL if no match found
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
