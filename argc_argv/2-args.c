#include <stdlib.h>
#include <stdio.h>
/**
 * main - print all arguments it recieved
 * @argc: num of command line arguments
 * @argv: array that contains the program
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
