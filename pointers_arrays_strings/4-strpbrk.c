#include "main.h"
/**
 * _strpbrk - searches a string w any set of bytes
 * @s: string to search
 * @accept: set of bytes to search
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
		s++;
	}
	return ('\0');
}
