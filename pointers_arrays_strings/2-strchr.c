#include "main.h"
/**
 * _strchr - Finds a character in a string
 * @s: string to search
 * @c: char to be located
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
