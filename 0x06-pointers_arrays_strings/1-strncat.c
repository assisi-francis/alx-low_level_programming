#include "main.h"


/**
 * _strncat - Concatenates two strings using at most an inputed num
 * @dest: The string to be appended upon
 * @src: The string to be appended to dest
 * @n: The number of bytes from src to be appended to dest
 * Return: A pointer to the new string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, destLength = 0;

	while (dest[index++])
		destLength++;

	for (index = 0; src[index] && index < n; index++)
		dest[destLength++] = src[index];

	return (dest);
