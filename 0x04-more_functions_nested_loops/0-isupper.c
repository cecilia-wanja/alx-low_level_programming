#include "main.h"

/**
 * _isupper - Checks if its an uppercase
 * @c: Int representing a character
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
