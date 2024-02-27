#include "main.h"
/**
 * print_most_numbers - prints numbers
 *
 * Return: 0
 */
void print_most_numbers(void)
{
int c;
int i = '4';
int x = '2';

	for (c = '0'; c <= '9'; c++)

	if (c != i && c != x)

		{
		_putchar(c);
		}
		_putchar('\n');

}
