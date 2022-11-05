#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  * _strcmp - compares two strings with one another
  *@s1: string 1
  *@s2: string 2
  *Return: difference between the bytes of the two strings
  */
int _strcmp(char *s1, char *s2)
{
	int comp;

	comp = strcmp(s1, s2);
	return (comp);
}
