#include <stdio.h>
/**
 * main - prints the number of args passed into it
 * @argc: number of cmd line arguments
 * @argv: array that has the program command line arg
 * Return: 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
