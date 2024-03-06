#include "main.h"
/**
 * _strcmp - compare values
 * @s1: value
 * @s2: value
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i] != '\0')
		{
			return (s1[i] != s2[i]);
		}
		i++;
	}
	return (0);

}
