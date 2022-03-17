#include "main.h"

/**
 * _isupper - Checks if its an uppercase
 * @c: Character to check if uppercase
 * Return: 1 if c is uppercase, otherwise return 0
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if(c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	
	return (isupper);
}
