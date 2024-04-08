#include "lists.h"
#include <stdlib.h>
/**
 *free_dlistint - start of the program
 *@head: head
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
