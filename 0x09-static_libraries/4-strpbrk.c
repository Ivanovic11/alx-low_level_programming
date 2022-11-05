#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * _strpbrk - searches for a string for any of a set of bytes
  *@s: the souce string
  *@accept: the string to search
  *Return: pointer to the byte in s that matches one of the bytes in accept,
  *or null if no matches exists
  */
char *_strpbrk(char *s, char *accept)
{
	char *test;

	test = strpbrk(s, accept);
	return (test);
}
