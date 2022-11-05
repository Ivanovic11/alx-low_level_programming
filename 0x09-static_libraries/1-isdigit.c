#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 *_isdigit - check if a number is from 0 to 9
 *@c: input param
 *
 *Return: 1 if digit is otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
