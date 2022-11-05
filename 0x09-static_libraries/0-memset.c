#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * _memset - fills the first n bytes of the memory areay pointed to
  *by s with the constant byte b
  *@s: the string s pointer
  *@b: the constant byte b
  *@n: thr number of bytes to be filled
  *Return: pointer to char
  */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
