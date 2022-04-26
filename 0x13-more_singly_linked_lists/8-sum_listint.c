#include "lists.h"

/**
 *sum_listint - sums up all the data in a linked list
 *@head: head of the list
 *
 *Return: sum of the number
 */

int sum_listint(listint_t *head)
{
listint_t *i = head;
size_t sum = 0;

while (i != NULL)
{
sum += i->n;
i = i->next;
}
return (sum);
}
