#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 * @h: pointer to first element.
 * Return: number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *i;
	int j = 0;

	i = h;
	while (i != NULL)
	{
		i = i->next;
		j++;
	}
	return (j);
}
