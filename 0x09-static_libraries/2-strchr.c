#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
  * _strchr - locates a character in a string
  *@s: the string
  *@c: the character
  *Return: the pointer to the string
  */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
