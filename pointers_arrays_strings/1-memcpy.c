#include "main.h"
/**
 * _memcpy - copy memory
 * @dest: mem area
 * @src: bytes
 * @n: copies
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
