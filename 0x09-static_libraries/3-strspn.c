#include <string.h>
#include "main.h"
#include <stdio.h>
/**
  * _strspn - returns thr lenght of a prefix substring
  *@s: Superstring
  *@accept: substring
  *Return: bytes from accepts that are in initial segement of s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;

	n = strspn(s, accept);
	return (n);
}
