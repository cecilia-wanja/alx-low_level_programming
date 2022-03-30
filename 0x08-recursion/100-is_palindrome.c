#include "main.h"

/**
 * str_len - gets string len
 * @s: input value
 * Return: returns string length
 */

int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + str_len(s + 1));
}

/**
 * is_palindrome - checks for a palindrome
 * @s: input value
 * @i: an interator
 * @len: string length indicator
 * Return: the state of the string
 */

int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
	{
		return (1);
	}
	if (s[i] == s[len - i - 1])
	{
		return (check_palindrome(s, len, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - print palindrome
 * @s: input value
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int i, len;

	i = 0;
	len = str_len(s);

	if (!*s)
	{
		return (1);
	}
	return (check_palindrome(s, len, i));
}
