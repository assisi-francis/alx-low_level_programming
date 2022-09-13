#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * Description: checks for lowercase letetrs
 *
 * Return: Always 0
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
