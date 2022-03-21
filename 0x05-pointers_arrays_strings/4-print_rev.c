#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string
 * @s: pointer to the string to print
 * Return: void
*/

void print_rev(char *s)
{
int i = 0;
while (s[i])
	i++;

while (i--)
{
_putchar(s[i]);
}
_putchar('\n');

}
