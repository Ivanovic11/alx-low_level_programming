#include <unistd.h>
#include <ctype.h>
#include "main.h"
/**
  * _isalpha - check if letters are in alphabetical order
  *@c : integer
  *Return: function returns 1 if c is a letter, lowercase or uppercase
  */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
