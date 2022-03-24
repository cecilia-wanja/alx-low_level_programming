#include "main.h"
#include <stdio.h>

/** 
 * *rot13 - encodes a string
 * @s: pointer to char param
 * Return: *s
 */

char *rot13(char *s)
{
	int i, j;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
