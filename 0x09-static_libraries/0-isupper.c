#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * isupper - prints uppercase letters
 * @c: character to be printed
 *
 * Return: 0if lowercase 1if uppercase
 */
int isupper(int c)
{
	if (c > 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
