#include <stddef.h>
#include "main.h"
/**
 * binary_to_uint - the name of function
 * @b: the variable
 * Return: 0
**/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = result * 2 + (b[i] - '0');
		i++;
	}
	return (result);
}
