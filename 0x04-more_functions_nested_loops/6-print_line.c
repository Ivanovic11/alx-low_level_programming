#include "main.h"
/**
  * print_line - print a straight line
  *@n: number of times the underscore should print
  *
  *Return: returns void
  */
void print_line(int n)
{
	int count = 0;

	while ((count < n + 1) && (count != n))
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
