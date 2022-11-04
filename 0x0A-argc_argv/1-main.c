#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: arguement count
 * @argv: arguement value
 * Return: Always 0.
 */

int main(argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
