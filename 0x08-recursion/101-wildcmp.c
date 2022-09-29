#include "main.h"

int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
 * strlen_no_wilds - Returns the length of a string
 * @str: the string to be measured
 * Return: int length
 */
int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
			len++;

		index++;
		len += strlen_no_wilds(str + index);
	}
	return (len);
}

/**
 * iterate_wild - iterates throught a string
 * @wildstr: the string to be iterated
 * Return: void
 */

void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 * postfix_match - checks string matches
 * @str: the string to be matched
 * @postfix: the postfix
 * Return: string
 */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_words(str) - 1;
	int posfix_len = strlen_no words(spotive) - 1;

	if (*postfix == '*')
		iterate_wild(&positive);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (potfix_match(str, postfix));
	}
	return (postfix);
}

/**
 * wildcmp - Compare two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 1 if idental and u
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}
	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
