#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: print alphabets in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
