#include "lists.h"
/**
 * print_dlistint - function
 * @h: input
 * Return: 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t node_count = 0;

	while (current != NULL)
	{
		node_count++;
		current = current->next;
	}

	return (node_count);
}
