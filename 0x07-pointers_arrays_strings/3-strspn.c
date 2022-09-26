#include "main.h"
#include <stdio.>

/**
 * _strspn - gets the length of a prefix
 * @s: string
 * @acept: source
 * Return: number of bytes in the initial segment of the string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int prev = 0;
	int i, j;

	i = 0;
	j = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		prev = count;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
			}
			j++;
		}
		if (prev == count)
		{
			break;
		}
		i++;
	}

	return (count);
}
