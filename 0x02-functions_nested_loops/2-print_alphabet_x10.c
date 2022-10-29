#include <unistd.h>
#include "main.h"
/**
  * print_alphabet_x10 - function prints lowercase alphabets 10 times
  *
  *Return : function returns void
  */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
