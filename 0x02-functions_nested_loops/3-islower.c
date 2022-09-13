#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * @c: c is an ascii character
 *
 * Return: Always 0 (Success) 1 (not successful)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
