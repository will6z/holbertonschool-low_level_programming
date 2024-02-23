#include <stdio.h>
/**
 * main - start of the program
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int i;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
