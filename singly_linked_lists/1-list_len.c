#include "lists.h"
#include <stddef.h>

/**
 * list_len -  length of the list
 * @h: input
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
