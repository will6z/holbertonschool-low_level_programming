#include <stdio.h>
/**
 * main - print its name
 * @argc: number of cmd line arguments
 * @argv: array that contains the cmd line arg
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
