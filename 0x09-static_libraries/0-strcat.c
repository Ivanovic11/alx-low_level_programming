#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  * _strcat - concatenates two strings together
  *@dest: desitantion string
  *@src: source string
  *Return: pointer to dest
  */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
