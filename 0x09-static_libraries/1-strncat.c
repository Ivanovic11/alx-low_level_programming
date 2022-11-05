#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
  * _strncat - concatenates two strings with the second string
  * containing at most n bytes
  *@dest: destination string
  *@src: source string
  *@n: number of bytes
  *Return: pointer to dest
  */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
