#include "main.h"
/**
 * _memset - fills memory
 * @s: to be filled
 * @b: char to copy
 * @n: numb of time to copy
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
