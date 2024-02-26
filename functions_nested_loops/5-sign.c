#include "main.h"

/**
 * print_sign - prints sign
 * @n: 
 * Return: 1 and prints + its greater than zero
 * 0 and prints 0 if its zero
 * -1 and prints - if its any less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
