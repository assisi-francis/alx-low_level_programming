#include "main.h"
#include <stdlib.h>

/**
 * _strlen - gets the length of a string
 * @string: string
 * Return: length (int)
 */

int _strlen(char *string)
{
	int length;

	length = 0;
	while (string[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * argstostr - concatenates all the arguments to a program
 * @ac: argc - number of arguments
 * @av: argv - array of arguments
 * return: point to a new string
 */

char *argstostr(int ac, char **av)
{
	int length, i, j, k;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	length = 0;
	for (i = 0; i < ac; i++)
	{
		length += _strlen(av[i]) + 1;
	}

	str = malloc(sizeof(char) * length + 1);
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\n';
	return (str);
}
