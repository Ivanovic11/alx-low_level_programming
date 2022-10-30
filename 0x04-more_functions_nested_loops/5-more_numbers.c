#include "main.h"
/**
  * more_numbers - print numbers 10 times
  *
  *Return: void
  */
void more_numbers(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (ch > 9)
			{
			_putchar((ch / 10) + 48);
			}
			_putchar((ch % 10) + 48);
		}
		_putchar('\n');
	}
}
