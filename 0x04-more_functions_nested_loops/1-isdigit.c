#include "main.h"

/**
 * _isdigit - checks for digit
 * 
 * @c: Digit to be checked
 *
 * Return: 1 digit 0 otherwuse
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
