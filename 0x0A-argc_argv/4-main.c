#include <stdio.h>
#include <stdlib.h>

/**
 *main - check the code
 *@argc: arguement count
 *@argv: argh=uement value
 *Return: Always 0.
 */

int main(int argc, char **argv)
{
	while(argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
