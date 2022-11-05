#include <unistd.h>
#include <ctype.h>
#include "main.h"
/**
  * _islower - checks if a letter is lowercase
  *@c: integer
  *
  *Return: retuns 1 if letter is lower else returns 0
  */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
