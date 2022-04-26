#include "lists.h"

/**
*free_listint2 - frees memory from a linked list
*@head: pointer to the head of the list
*Return: void
*/

void free_listint2(listint_t **head)
{
listint_t *i;
listint_t **j = head;

if (j != NULL)
{
while (*head != NULL)
{
i = *head;
free(i);
*head = (*head)->next;
}

*j = NULL;

}
}
