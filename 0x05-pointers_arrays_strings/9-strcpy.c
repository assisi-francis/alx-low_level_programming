#include "main.h"

/**
 * _strcpy - copies the string pointed to bt src into dest
 * @dest: pointer destination
 * @src: pointer to source
 * Return: char with copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
