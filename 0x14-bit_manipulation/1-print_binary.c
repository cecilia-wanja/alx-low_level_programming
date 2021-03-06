#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number that will be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int i = 1;

	if (n > 1)
		print_binary(n >> 1);
	if ((n & i) == 1)
		_putchar('1');
	else
		_putchar('0');
}
