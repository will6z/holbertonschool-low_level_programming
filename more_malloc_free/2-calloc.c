#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates mem for an array
 * @nmemb: input
 * @size: input
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb = size); b++)
		a[b] = 0;
	return (a);
}
