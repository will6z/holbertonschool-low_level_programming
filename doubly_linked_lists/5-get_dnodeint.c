#include "lists.h"
/**
 *get_dnodeint_at_index - Start of the program
 *@head: head
 *@index: index
 *Return: Current
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	return (current);
}
