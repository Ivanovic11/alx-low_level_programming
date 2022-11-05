#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
  * _strncpy - copies string from source to dest with at most n bytes
  *@dest: destination string
  *@src: source string
  *@n: number of bytes to copy
  *Return: pointer to dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
