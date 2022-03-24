#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a : pointer to int params
 * @n : pointer to int params
 * Return: no
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int k;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
		i++;
		j--;
	}
}
