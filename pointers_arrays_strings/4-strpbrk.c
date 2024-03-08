#include "main.h"
/**
 * _strpbrk - searches a string w any set of bytes
 * @s: string to search
 * @accept: set of bytes to search
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
				{
				if (*s == accept[index])
					return (s);
				}
			s++;
	}
	return ('\0');
}
