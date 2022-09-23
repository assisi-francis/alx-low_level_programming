#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @s: The string to be encoded
 * Return: A pointer to the encoded string
 */

char *leet(char *s)
{
	int count = 0, i;
	int lowLetters[] = {97, 101, 111, 116, 108};
	int uppLetters[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lowLetters[i] || *(s + count) == uppLetters[i])
			{
				*(s + count) = num[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
