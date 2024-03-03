#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: value 1
 * @b: value 2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int m = *a;

	m = *a;
	*a = *b;
	*b = m;
}
