#include "main.h"
/**
 * char *_strcpy - function the copies the string
 * @dest: copy to
 * @src: copy from
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
