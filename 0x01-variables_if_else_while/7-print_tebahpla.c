#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print lowercase alphabets in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 122; c > 96; c--)
	{
		putchar(c);
	}
	putchar(10);

	return (0);
}
