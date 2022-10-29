#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z');
	{
       _putchar(letter);
       letter++;
	}
	_putchar('\n');
}
