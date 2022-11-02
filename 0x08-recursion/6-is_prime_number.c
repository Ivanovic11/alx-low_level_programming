#include "main.h"
#include <stdio.h>
/**
  * checker - checks for prime
  *@n: the number
  *@c: the check
  *Return: int
  */
int checker(int n, int c)
{
	if (n % c == 0 && n != c)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	return (checker(n, c + 1));
}
/**
  *is_prime_number - returns 1 if integer is prime
  *@n: the integer
  *Return: int
  */
int is_prime_number(int n)
{
	if (n == 0 || n <= 1)
		return (0);
	return (checker(n, 2));
}
