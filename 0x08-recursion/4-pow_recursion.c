#include "main.h"
#include <stdio.h>
/**
  * _pow_recursion - returns the power of a number raised to another value
  *@x: the number
  *@y: the power
  *Return: int
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	x = x * _pow_recursion(x, (y - 1));
	return (x);
}
