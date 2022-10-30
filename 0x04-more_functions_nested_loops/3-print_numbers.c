#include "main.h"
/**
  * print_numbers - prints numbers from 0-9
  *
  *Return: always zero
  */
void print_numbers(void)
{
	int i;

	for (i = 0x30; i <= 0x39; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
