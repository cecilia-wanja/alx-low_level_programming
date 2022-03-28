#include "main.h"

/**
 * _memset - fills the first @n bytes of the memory area pointed by @s with the constant byte of @b
 * @s: param pointer to a char
 * @b: value that fills the memory 
 * @n: number of bytes to be filles by @b
 * Return: Pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
