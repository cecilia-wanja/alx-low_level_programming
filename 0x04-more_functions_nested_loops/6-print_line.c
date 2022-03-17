#include "main.h"

/**
 * print_line - Print line dependent on the integer n.
 * @n : The number of '_' characters to use
 * Return: Void.
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
