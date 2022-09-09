#include <stdio.h>

/**
 * main: Entry point
 *
 * Description: Print lowercase and uppercase alphabets
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

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
