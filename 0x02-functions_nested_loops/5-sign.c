#include <unistd.h>
#include "main.h"
/**
  * print_sign - prints sign of a number
  *@n : Integer
  *Return: function returns 1 if positive
  * 0 if zero
  * -1 if negative
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (12);
}
