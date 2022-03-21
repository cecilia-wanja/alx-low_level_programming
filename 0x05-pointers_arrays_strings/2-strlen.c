#include "main.h"
#include <stdio.h>

/**
 * _strlen - gets length of a string
 * @s: pointer
 * Return: void
*/

int _strlen(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; ++i);


	return (i);
}
