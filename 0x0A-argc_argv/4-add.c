#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  *main - main function
  *@argc: argument count
  *@argv: argument value
  *Return: return 0
  */
int main(int argc, char *argv[])
{
	int result = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result  = result + atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
