#include "main.h"

/**
 * _strncpy - Copies a string at most an inputed num
 *
 * @dest: The buffer storing the string copy
 * @src: The source string
 * @n: The maximum number of bytes to be copied from src
 *
 * Return: A pointer to the string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, srcLength = 0;

	while (src[index++])
		srcLength++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = srcLength; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
