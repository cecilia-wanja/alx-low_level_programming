#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks if its an uppercase
 * @c: Character to check if uppercase
 * Return: 1 if c is uppercase, otherwise return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
